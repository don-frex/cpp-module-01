/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:33:14 by asaber            #+#    #+#             */
/*   Updated: 2023/11/11 15:26:24 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int N;
	Zombie	*Zombies;

	N = 7;
	Zombies = zombieHorde(N, "ZOMBIE");

	for(int i = 0; i < N; i++)
	{
		Zombies[i].announce();
	}
	delete [] Zombies;
	return (0);
}
