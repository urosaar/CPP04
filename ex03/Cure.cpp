#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& other) : AMateria(other.type) {}

Cure& Cure::operator=(const Cure& other)
{
    type = other.type;
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals "
              << target.getName() << "'s wounds *" << std::endl;
}
