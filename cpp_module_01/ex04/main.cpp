#include "test.hpp"

int main (void)
{
    int return_fun;

    return_fun = ft_copy_file();
    if(return_fun)
        return (return_fun);
    return (0);
}