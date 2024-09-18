/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:36 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 14:17:17 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// Constructor
Zombie::Zombie()
{
	this->_name = "(Unknown)";
	std::cout << "Zombie " << this->_name << " spawned.\n" << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " spawned.\n" << std::endl;
}

// Deconstructor
Zombie::~Zombie()
{
	std::cout << this->_name << " died.\n"  << std::endl;
}

// Public Methods

void	Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}