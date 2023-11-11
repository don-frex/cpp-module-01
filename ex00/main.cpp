/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:56:57 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 12:13:01 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	randomChump("zombie_heap");
	Zombie	*zombie_shli7a;

	zombie_shli7a = newZombie("zombie_stack");
	zombie_shli7a->announce();
	delete zombie_shli7a;
}