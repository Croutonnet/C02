#include "MateriaSource.hpp"
#include "ICharacter.hpp"

MateriaSource::MateriaSource(){
	// std::cout << "Default MateriaSource Constructor Called" << std::endl;
	for (int i = 0; i < 4; i++){
		book[i] = NULL;
	}
}

MateriaSource::~MateriaSource(){
	// std::cout << "Default MateriaSource Destructor Called" << std::endl;
	for (int i = 0; i < 4; i++){
		if (book[i])
			delete book[i];
	}
	
}

MateriaSource::MateriaSource(const MateriaSource &inst){
	// std::cout << "Default MateriaSource Copy Called" << std::endl;
	*this = inst;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs){
	std::cout << "Operator = override" << std::endl;
	if (this != &rhs){
		for (int i = 0; i < 4; i++){
			if (book[i])
				delete book[i];
			book[i] = rhs.book[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *mat){
	int	nb = 0;
	for (int i = 0; i < 4; i++){
		if (this->book[i])
			nb++;
	}
	if (nb < 4){
		book[nb] = mat;
		return ;
	}
	std::cout << "Materia Book is full, 4 MAX" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type){
	int	nb = 0;
	for (int i = 0; i < 4; i++){
		if (this->book[i])
			nb++;
	}
	if (nb == 0)
		return 0;
	for (int i = 0; i < 4; i++){
		if (this->book[i]->getType() == type){
			return this->book[i]->clone();
		}
	}
	std::cout << "Materia not found" << std::endl;
	return 0;
}
