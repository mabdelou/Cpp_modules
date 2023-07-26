#include "Harl.hpp"


void Harl::debug( void )
{
    std::cout << "\033[0;32m I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "\033[0;32m I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "\033[0;32m I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void )
{
    std::cout <<  "\033[0;32m This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    Harl tst;
    void (Harl::*f_ptr[4]) (void);
    std::string str[4];
    int a;

    a = 0;

    f_ptr[0] = &Harl::debug;
    f_ptr[1] = &Harl::info;
    f_ptr[2] = &Harl::warning;
    f_ptr[3] = &Harl::error;

    str[0] = "debug";
    str[1] = "info";
    str[2] = "warning";
    str[3] = "error";

    for (int i = 0 ; i < 4 && a < 4 ; i++ && a++)
        if(level == str[i])
            (tst.*f_ptr[i]) ();
}