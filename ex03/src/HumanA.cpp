/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:22 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 20:48:35 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

#include <iostream>

HumanA::~HumanA(){}

HumanA::HumanA(const std::string& name, Weapon& weapon) : _name(name), _weapon(weapon){}

void HumanA::attack(void) const 
{ std::cout << _name << " attacks with " << _weapon.getType() << "." <<  std::endl;}
