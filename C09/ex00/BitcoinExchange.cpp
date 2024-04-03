#include "BitcoinExchange.hpp"
#include <fstream>
#include <stdexcept>
#include <string>

BitcoinExchange::BitcoinExchange(){
	cout << "Default BitcoinExchange Constructor Called" << endl;
}

BitcoinExchange::~BitcoinExchange(){
	cout << "Default BitcoinExchange Destructor Called" << endl;
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &inst){
	*this = inst;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs){
	if (this != &rhs) {
		data = rhs.data;
	}
	return *this;
}

void	BitcoinExchange::doMap(){
	std::ifstream dataFile;
	string line;
	string date;
	string bitcoin;

	dataFile.open("data.csv");
	if (dataFile.is_open() == false)
		throw std::invalid_argument("There is no data file to analyse");
	while(std::getline(dataFile, line)){
		date = line.substr(0, line.find(","));
		bitcoin = line.substr(line.find(",") + 1, line.length() - 1);
		data.insert(std::make_pair(date, std::stof(bitcoin)));
	}
}

string	BitcoinExchange::verifyFormat(string line){
	(void)line;
	return "";
}

string	BitcoinExchange::verifyNumber(string line){
	(void)line;
	return "";
}

string	BitcoinExchange::verifyDate(string line){
	string date = line.substr(0, line.find("|"));
	if (line.find("|") != 10)
		return date;
	if (line[4] != '-' || line[7] != '-')
		return date;
	return "";
}

void	BitcoinExchange::launchData(string _file){
	file.open(_file);
	string	line;
	string	err;
	bool	flag;
	std::map<string, float>::iterator it;

	doMap();
	while (std::getline(file, line)){
		flag = true;
		line.erase(std::remove_if(line.begin(), line.end(), ::isspace), line.end());
		err = verifyFormat(line);
		if (err != ""){
			flag = false;
			cout << "Error: bad format => " << err << endl;
		}
		err = verifyDate(line);
		if (err != ""){
			flag = false;
			cout << "Error: bad Date => " << err << endl;
		}
		err = verifyNumber(line);
		if (err != ""){
			flag = false;
			cout << "Error: bad number => " << err << endl;
		}
		if (flag == true){
			string	date = line.substr(0, line.find("|"));
			it = data.lower_bound(date);
			if (it != data.begin() && date != it->first)
				it--;
			float	bitcoin = std::stof(line.substr(line.find("|") + 1, line.length() - 1));
			cout << date << " => " << bitcoin << " = " << it->second * bitcoin << endl;
		}
		err = "";
	}
}