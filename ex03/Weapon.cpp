/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:22:56 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 19:51:30 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon::Weapon(std::string name)
{
	type = name;
}

Weapon::~Weapon()
{
	
}
Weapon::Weapon()
{
	
}
const std::string Weapon::getType()
{
	return(this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
