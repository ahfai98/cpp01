/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:51 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 15:23:27 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string s): _name(s)
{
	std::cout << "(Zombie)" <<_name << " spawned.\n" << std::endl;
}

// Deconstructor
Zombie::~Zombie()
{
	std::cout << "(Zombie)" << _name << " destroyed.\n"  << std::endl;
}

// Public Methods

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}
