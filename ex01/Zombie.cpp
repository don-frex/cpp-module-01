/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:31:42 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 16:42:57 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << name << " created" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << name << " destroyed" << std::endl;
}

void Zombie::announce( void )
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..."<<std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}