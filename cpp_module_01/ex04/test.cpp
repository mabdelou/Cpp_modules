#include "test.hpp"

int ft_copy_file(void)
{
    std::ifstream in_file("test.hpp");
    if(!in_file)
    {
        std::cout << "can't read this file 'in_file'" << std::endl;
        return (1);
    }
    std::ofstream out_file("tst.txt");
    if(!out_file)
    {
        std::cout << "can't create or put in this file 'out_file'" << std::endl;
        return (2);
    }
    std::string str;
    while(std::getline(in_file, str))
        out_file << str << std::endl;
    return (0);
}