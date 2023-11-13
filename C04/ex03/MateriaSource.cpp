#include "MateriaSource.hpp"
#include "ICharacter.hpp"

MateriaSource::MateriaSource(){
	std::cout << "Default MateriaSource Constructor Called" << std::endl;
}

MateriaSource::~MateriaSource(){
	std::cout << "Default MateriaSource Destructor Called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &inst){
	std::cout << "Default MateriaSource Copy Called" << std::endl;
	*this = inst;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs){
	(void) rhs;
	return *this;
}

void MateriaSource::learnMateria(AMateria *mat){
	for (int i = 0; i < 4; i++){
		if (this->book[i] == NULL){
			this->book[i] = mat->clone();
			return ;
		}
	}
	std::cout << "Materia Book is full, 4 MAX" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type){
	for (int i = 0; i < 4; i++){
		if (this->book[i] && this->book[i]->getType() == type){
			return this->book[i]->clone();
		}
	}
	std::cout << "Materia not found" << std::endl;
	return 0;
}
