#include "Zombie.hpp"


int main ()
{
    int a = 100;
    Zombie *zmb;

    zmb = zombieHorde(a,"volters");
    
    for(int i = 0; i < a; i++)
        zmb[i].announce();
    delete[] zmb;
    // system("leaks horde_zombies");
    return (0);
}