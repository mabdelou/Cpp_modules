#ifndef WEAPON_H__
# define WEAPON_H__

#include <iostream>
#include <string>

class Weapon
{
    private:
        std::string Type;
    public:
        const std::string& getType(void);
        void setType(std::string newType);
        Weapon(std::string str);
        Weapon();
        ~Weapon();
};

#endif