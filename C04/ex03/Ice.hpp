#pragma once

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria{
	public:
		Ice();
		~Ice();
		Ice(const Ice &inst);

		Ice &operator=(const Ice &rhs);

		AMateria* clone() const;
		void use(ICharacter& target);
};