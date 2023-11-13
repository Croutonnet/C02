#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource{

	private:
		std::string type;
		AMateria *book[4];
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(const MateriaSource &inst);

		MateriaSource &operator=(const MateriaSource &rhs);

		void learnMateria(AMateria* mat);
		AMateria* createMateria(std::string const &type);
};