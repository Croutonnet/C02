#pragma once

#include <iostream>
#include <map>
#include <fstream>

using std::cout;
using std::endl;
using std::string;

#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[33m"
#define BLACK	"\033[30m"
#define WHITE	"\033[37m"
#define RESET	"\033[0m"
#define PURPLE	"\033[38;5;165m"

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