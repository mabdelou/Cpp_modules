#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
    return (Type);
}
void Weapon::setType(std::string newType)
{
    Type = newType;
}
Weapon::Weapon(std::string str)
{
    Type = str;
}
Weapon::Weapon()
{
    Type  = "";
}
Weapon::~Weapon()
{
}