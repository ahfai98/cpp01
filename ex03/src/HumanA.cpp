/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:22 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:39:23 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

// Constructor
HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name <<" joined the battlefield and grabbed a " << this->_weapon.getType() << " to fight." << std::endl;
}

// Deconstructor
HumanA::~HumanA(void)
{
    std::cout << this->_name << " died." << std::endl;
}

// Public Methods
void HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << "." << std::endl;
}
