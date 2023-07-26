#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zmb;

    zmb = new Zombie[N];
    while(--N != -1)
        zmb[N].set_name(name);
    return (&zmb[0]);
}