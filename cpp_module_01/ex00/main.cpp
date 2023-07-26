#include "Zombie.hpp"


int main ()
{
    randomChump("foo");
    randomChump("foo1");

    Zombie *z1 = newZombie("FOO");
    z1->announce();
    delete(z1);
    Zombie *z2 = newZombie("FOO1");
    z2->announce();
    delete(z2);
    return (0);
}