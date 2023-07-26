#ifndef ZOMBIE_H__
# define ZOMBIE_H__

# include <iostream>

class Zombie 
{
    private:
        std::string _zb_name;
    public:
        void set_name(std::string new_name);
        std::string get_name(void);
        void announce(void);
        /*Zombie* newZombie( std::string name );
        void randomChump( std::string name );*/
    ~Zombie(void);
};

Zombie* zombieHorde( int N, std::string name );

#endif