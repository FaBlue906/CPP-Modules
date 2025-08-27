#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        PmergeMe    sort(ac, av);
    }
    catch(const std::exception& e)
    {
        std::cout << "PmergeMe Exception Caught!" << std::endl;
        std::cerr << e.what() << '\n';
    }
    return (0);
}