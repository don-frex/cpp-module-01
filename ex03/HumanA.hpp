/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaber <asaber@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 17:35:43 by asaber            #+#    #+#             */
/*   Updated: 2023/11/10 21:13:41 by asaber           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_CPP
#define HUMANA_CPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		&WeaponA;
		std::string name;
	public:
		~HumanA();
		void	attack();
		HumanA(std::string name, Weapon &WeaponA);

};

#endif