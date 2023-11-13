#pragma once

#include <iostream>
#include "ICharacter.hpp"

class AMateria{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		virtual ~AMateria();
		AMateria(const AMateria &inst);
		
		AMateria &operator=(const AMateria &rhs);
		
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
};