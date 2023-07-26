#include "Zombie.hpp"

void Zombie::set_name(std::string new_name)
{
    _zb_name = new_name;
}
std::string Zombie::get_name(void)
{
    return (_zb_name);
}
void Zombie::announce(void)
{
    std::cout << _zb_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << _zb_name << ": ZZzzzZZ" << std::endl;
}