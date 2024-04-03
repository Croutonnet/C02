#include "BitcoinExchange.hpp"
#include <fstream>
#include <sys/stat.h>

bool parsing(string file){
	if (file.find(".txt") == string::npos)
		return false;
	if (file.find(".txt") != file.length() - 4)
		return false;
	std::ifstream test;
	test.open(file);
	if (test.is_open() == 0)
		return false;
	struct stat fileStat;
	if (stat(file.c_str(),&fileStat) == 0){
		if (S_ISDIR(fileStat.st_mode) == true)
			return false;
	}
	if (file.length() == 4)
		return false;
	return true;
}

int main(int argc, char **argv){
	if (argc < 2)
		return (cout << "This programs need an arguments" << endl, 2);
	if (parsing(argv[1]) == false)
		return (cout << "This programs need an .txt file that exist" << endl, 2);
	BitcoinExchange database;
	try {
		database.launchData(argv[1]);
	} catch(std::exception &e){
		cout << e.what() << endl;
	}
}