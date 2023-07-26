#include "Harl.hpp"

int main (void)
{
    Harl tst;
    std::cout << "\033[0;31m check if debug lvl :" << std::endl; 
    tst.complain("debug");
    std::cout << "\033[0;31m check if info lvl :" << std::endl; 
    tst.complain("info");
    std::cout << "\033[0;31m check if warning lvl :" << std::endl; 
    tst.complain("warning");
    std::cout << "\033[0;31m check if  error lvl :" << std::endl; 
    tst.complain("error");
    std::cout << "\033[0;31m check if  another string v1 :" << std::endl; 
    tst.complain("errrr");
    std::cout << "\033[0;31m check if another string v2 :" << std::endl; 
    tst.complain("errorbdfbfdb");
    std::cout << "\033[0;31m check if danother string v3 :" << std::endl;    
    tst.complain("");

    return (0);
}