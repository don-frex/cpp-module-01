/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:23:51 by asaber            #+#    #+#             */
/*   Updated: 2023/11/11 15:32:48 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl test;

	test.complain("ERROR");
	test.complain("INFO");
	test.complain("DEBUG");
	test.complain("WARNING");
	return(EXIT_SUCCESS);
}