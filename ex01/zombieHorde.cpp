/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:31:36 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 16:50:07 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zombie_horde[i].set_name(name);
	}
	return (zombie_horde);
}
	