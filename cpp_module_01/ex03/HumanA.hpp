#ifndef HUMANA_H__
# define HUMANA_H__

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon *Type;
    public:
        std::string& getNameA(void);
        void setNameA(std::string &new_str);
        Weapon& getWeapon(void);
        void setWeapon(Weapon& newclass);
        void attack(void);
        HumanA(std::string name, Weapon& test);
};

#endif