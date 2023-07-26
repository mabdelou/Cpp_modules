#include "HumanA.hpp"

std::string& HumanA::getNameA(void)
{
    return (name);
}
void HumanA::setNameA(std::string &new_name)
{
    name = new_name;
}
HumanA::HumanA(std::string name, Weapon& test)
{
    Type =  &test;
    setNameA(name);
}
void HumanA::attack()
{
    std::cout << name << " attacks with their " << Type->getType() << std::endl;
}
Weapon& HumanA::getWeapon(void)
{
    return (*Type);
}
void HumanA::setWeapon(Weapon& newclass)
{
    Type = &newclass;
}