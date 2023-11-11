/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:13:54 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 23:27:04 by asaber           ###   ########.fr       */
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
	std::ifstream rfile;
	std::ofstream wtflie;
	int			lents1;
	int			 lents2;
	

	if (ac != 4)
	{
		std::cout << "error when adding varibels\n";
		return(EXIT_FAILURE);
	}
	filename = av[1];
	s1 = av[2];
	s2 = av[3];
	lents1 = s1.size();
	lents2 = s2.size();
	if (!filename.length() || !lents1 || !lents2)
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
		wtflie << readline << std::endl;
	}
	wtflie.close();
	wtflie.open(filename, std::ios::trunc);
	wtflie << s1 << std::endl << s2 << std::endl;
	wtflie.close();
	return(EXIT_SUCCESS);	
}