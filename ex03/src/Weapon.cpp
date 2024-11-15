/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:33 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 15:55:43 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon()
{
	std::cout << "(Weapon)Default constructor called." << std::endl;
}

Weapon::Weapon(const std::string &type) : _type(type)
{
	std::cout << "(Weapon)" << _type << " constructor called." << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "(Weapon)" << _type << " destructor called." << std::endl;
}

const std::string &Weapon::getType(void) const { return this->_type; }

void  Weapon::setType(const std::string &type) { this->_type = type; }
