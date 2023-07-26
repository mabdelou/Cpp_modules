#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie zmb;

    zmb.set_name(name);
    zmb.announce();
}