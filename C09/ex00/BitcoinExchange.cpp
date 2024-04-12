#include "BitcoinExchange.hpp"
#include <cctype>
#include <climits>
#include <fstream>
#include <stdexcept>
#include <string>

BitcoinExchange::BitcoinExchange(){
	cout << BLUE "Default BitcoinExchange Constructor Called" RESET << endl;
}

BitcoinExchange::~BitcoinExchange(){
	cout << BLUE "Default BitcoinExchange Destructor Called" RESET << endl;
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
		throw std::invalid_argument("There is no data file to analyse, the program need a data.csv file");
	while(std::getline(dataFile, line)){
		date = line.substr(0, line.find(","));
		bitcoin = line.substr(line.find(",") + 1, line.length() - 1);
		data.insert(std::make_pair(date, std::stof(bitcoin)));
	}
}

string	BitcoinExchange::verifyFormat(string line){
	if (line.find("|") == string::npos || line[line.find("|") - 1] != ' ' || line[line.find("|") + 1] != ' ')
		return line;
	return "";
}

string	BitcoinExchange::verifyNumber(string line){
	string number = line.substr(line.find("|") + 1, line.length());
	if (std::stof(number) < 0 || std::stof(number) > 1000)
		return number + " in the line " + line;
	return "";
}

string	BitcoinExchange::verifyDate(string line){
	string date = line.substr(0, line.find("|"));
	if (line[4] != '-' || line[7] != '-')
		return date + " in the line " + line;
	string year = line.substr(0, 4);
	for (int i = 0; i < 4; i++){
		if (std::isdigit(year[i]) == false){
			return date + " in the line " + line;
		}
	}
	if (std::stoi(&date[5]) < 1 || std::stoi(&date[5]) > 12)
		return date + " in the line " + line;
	if (std::stoi(&date[8]) < 1 || std::stoi(&date[8]) > 31)
		return date + " in the line " + line;
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
		err = verifyFormat(line);
		if (err != "" && flag == true){
			flag = false;
			cout << RED "Error: bad format => " << err << RESET << endl;
		}
		err = verifyDate(line);
		if (err != "" && flag == true){
			flag = false;
			cout << RED "Error: bad Date => " << err << RESET << endl;
		}
		err = verifyNumber(line);
		if (err != "" && flag == true){
			flag = false;
			cout << RED "Error: bad number => " << err << RESET << endl;
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