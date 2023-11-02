#include "Harl.hpp"

int main(int argc, char **argv){
	Harl garl;
	if (argc != 2){
		std::cout << "Kosse tu fa? Faut tu mette DEBUG ou INFO ou WARNING ou ERROR ou quelque chose de random!!!!"<< std::endl;
		return (0);
	}
	garl.complain(argv[1]);
}
