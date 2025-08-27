/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbordes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 10:10:48 by fbordes           #+#    #+#             */
/*   Updated: 2024/01/10 09:10:10 by fbordes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	ft_read(char **av, std::string filename)
{
	char		c;
	int		i = 0;
	std::string	s1;
	std::string	s2;
	std::string	res;
	std::ofstream	input;
	std::ifstream	output;
	std::size_t	pos;
	
	output.open(filename.c_str());
	s1 = av[2];
	s2 = av[3];
	c = output.get();
	while (output.good())
	{
		res += c;
		c = output.get();
	}
	pos = res.find(s1);
	while (pos!=std::string::npos)
	{
		res.erase(pos, s1.length());
		res.insert(pos, s2);
		pos = res.find(s1);
	}
	input.open((filename + ".replace").c_str());
	while (res[i])
	{
		c = res[i++];
		input.put(c);
	}
	input.close();
}

int	main(int ac, char **av)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;
	std::ifstream	output;
	
	if (ac == 4)
	{
		s1 = av[2];
		s2 = av[3];
		if (s1 == s2)
		{
			std::cout << "ERROR : S1["<< s1 <<"] = S2[" << s2 << "] !!\n";
			return (1);
		}
		filename = av[1];
		output.open(filename.c_str());
		if (!output)
		{
			std::cout << "Failed to open [" << filename << "] !!\n";
			return (1);
		}
		else
		{
			ft_read(av, filename);
			output.close();
		}
		return (0);
	}
	std::cout << "ERROR : Number arguments ["<< ac <<"] invalid !!\n";
	return (1);
}
