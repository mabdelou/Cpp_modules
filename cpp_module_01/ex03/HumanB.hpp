#ifndef HUMANB_H__
# define HUMANB_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon *Type;
    public:
        std::string& getNameB(void);
        void setNameB(std::string& new_str);
        Weapon& getWeapon(void);
        void setWeapon(Weapon& newclass);
        void attack(void);
    HumanB(std::string name);
};

#endif