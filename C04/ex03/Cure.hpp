#pragma once

#include "AMateria.hpp"
#include <iostream>

class Cure : public AMateria{
	public:
		Cure();
		~Cure();
		Cure(const Cure &inst);

		Cure &operator=(const Cure &rhs);

		AMateria* clone() const;
		void use(ICharacter& target);
};