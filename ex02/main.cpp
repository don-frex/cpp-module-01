/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:58:19 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 17:07:19 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	std::cout << "The memory address of the string variable: " << &str <<std::endl;
	std::cout << "The memory address held by stringPTR: " << ptr << std::endl;
	std::cout << "The memory address held by stringREF: " << &ref << std::endl;

	std::cout << "The value of the string variable: " << str << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *ptr << std::endl;
	std::cout <<  "The value pointed to by stringREF: " << ref << std::endl;
	return (EXIT_SUCCESS);
}