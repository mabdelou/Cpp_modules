#include "HumanB.hpp"

std::string& HumanB::getNameB(void)
{
    return (name);
}
void HumanB::setNameB(std::string& new_str)
{
    name = new_str;
}
HumanB::HumanB(std::string name)
{
    setNameB(name);
}
void HumanB::attack()
{
    std::cout << name << " attacks with their " << Type->getType() << std::endl;
}
Weapon& HumanB::getWeapon(void)
{
    return (*Type);
}
void HumanB::setWeapon(Weapon& newclass)
{
    Type = &newclass;
}