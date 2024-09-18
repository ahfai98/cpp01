/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:26 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 20:48:23 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(){}
HumanB::HumanB(const std::string name) : name(name), weapon(NULL){}
HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon& weapon) { this->weapon = &weapon; }
void HumanB::attack(void) const 
{
	if (this->weapon == NULL)
		std::cout << name << " attacks with their fist." << std::endl; 
	else
	 	std::cout << name << " attacks with a " << weapon->getType() << "." << std::endl; 
}
