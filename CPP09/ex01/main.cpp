#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./RPN <expression>" << std::endl;
		return (1);
	}
	else
	{
		std::string e = av[1];
		try
		{
			RPN	rpn;
			std::cout << rpn.run(e) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "Exception Caught !" << std::endl;
			std::cerr << e.what() << '\n';
		}	
	}
	return (0);
}