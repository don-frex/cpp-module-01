/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:13:54 by asaber            #+#    #+#             */
/*   Updated: 2023/11/11 18:33:04 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int	main(int ac, char **av)
{
	std::string s1;
	std::string s2;
	std::string filename;
	std::string readline;
	std::string	resault;
	std::ifstream rfile;
	std::ofstream wtflie;
	size_t	foundpos;
	size_t	pos;
	

	if (ac != 4)
	{
		std::cout << "error when adding varibels\n";
		return(EXIT_FAILURE);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];

	if (!filename.length() || !s1.size() || !s2.size())
	{
		std::cout << "2error when adding varibels\n";
		return(EXIT_FAILURE);
	}
	rfile.open(filename);
	wtflie.open(filename + ".replace");
	if (rfile.fail())
	{
		std::cout << "Unable to open this file!\n";
		return(EXIT_FAILURE);
	}
	while (std::getline(rfile, readline))
	{
		resault.clear();
		pos = 0;
		while (pos < readline.length())
		{
			foundpos = readline.find(s1, pos);
			if (foundpos != std::string::npos)
			{
				resault += readline.substr(pos, foundpos - pos);
				resault += s2;
				pos = foundpos + s1.length();
			}
			else
			{
				resault += readline.substr(pos);
				break;
			}
		}
		
		wtflie << resault << std::endl;
	}
	rfile.close();
    wtflie.close();
	return(EXIT_SUCCESS);	
}