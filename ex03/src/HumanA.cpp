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

// HumanA::HumanA() {} <- this will cause a compilation error
//HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon){}

HumanA::~HumanA(){}

void HumanA::attack(void) const { std::cout << name << " attacks with a " << weapon.getType() << "." <<  std::endl;}

HumanA::HumanA(const std::string& name, Weapon& weapon) : name(name), weapon(weapon){}