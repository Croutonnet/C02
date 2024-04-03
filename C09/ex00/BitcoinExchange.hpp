#pragma once

#include <iostream>
#include <map>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

class	BitcoinExchange{
	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &inst);
		BitcoinExchange& operator=(const BitcoinExchange &rhs);

		void launchData(string _file);
	private:
		std::ifstream			file;
		std::map<string, float>	data;

		string	verifyFormat(string line);
		string	verifyNumber(string line);
		string	verifyDate(string line);
		void	doMap();
};