/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:26 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 15:52:37 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

#include <iostream>

HumanB::HumanB(): _name(""), _weapon(NULL)
{
	std::cout << "(HumanB)Default constructor called." << std::endl;
}

HumanB::HumanB(const std::string &name) : _name(name), _weapon(NULL)
{
	std::cout << "(HumanB)" << _name << " constructor called." << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "(HumanB)" << _name << " destructor called." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) { _weapon = &weapon; }

void HumanB::attack(void) const 
{
	if (_weapon == NULL)
		std::cout << _name << " attacks without a weapon." << std::endl; 
	else
	 	std::cout << _name << " attacks with " << _weapon->getType() << "." << std::endl; 
}
