/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:37:08 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 21:15:31 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &WeaponA)
 : WeaponA (WeaponA)
{
	this->name = name;
}

HumanA::~HumanA()
{
	
}

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << WeaponA.getType() << std::endl;

}