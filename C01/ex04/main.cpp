#include <iostream>
#include <fstream>

int	main(int argc, char **argv){

	if (argc != 4){
		std::cout << "Il faut 3 argument jeune personne de type personne¡¡¡" << std::endl;
		return (0);
	}
	std::ifstream file;
	std::string search = argv[2];
	if (search.length() == 0){
		std::cout << "Les arguments vides ne sont pas valide" << std::endl;
		return (0);
	}
	std::string replace = argv[3];
	if (replace.length() == 0){
		std::cout << "Les arguments vides ne sont pas valide" << std::endl;
		return (0);
	}
	std::string outputName;
	std::ofstream res;
	std::string line;
	outputName = argv[1];
	if (outputName.length() == 0){
		std::cout << "Les arguments vides ne sont pas valide" << std::endl;
		return (0);
	}
	outputName += ".replace";
	file.open(argv[1], std::ios::in);
	res.open(outputName, std::ios::out);
	while (getline(file, line)){
		std::size_t	start;
		start = line.find(search, 0);
		while (start != std::string::npos){
			line = line.substr(0, start) + replace + line.substr(start + search.length(), line.length());
			start = line.find(search, 0);
		}
		res << line + "\n";
	}
	file.close();
}