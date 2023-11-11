/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:45:49 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 21:28:53 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

HumanB::~HumanB()
{
	
}

void	HumanB::setWeapon(Weapon &WeaponB)
{
	this->WeaponB = &WeaponB;
	
}

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << WeaponB->getType() << std::endl;
}
