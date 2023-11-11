/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:45:19 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 21:28:49 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_CPP
#define HUMANB_CPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon		*WeaponB;
		std::string name;
	public:
		HumanB(std::string name);
		~HumanB();
		void	setWeapon(Weapon &WeaponB);
		void	attack();
};

#endif