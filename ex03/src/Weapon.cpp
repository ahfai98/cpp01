/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:33 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 20:31:59 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon() {}
Weapon::Weapon(const std::string& type) : type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType(void) const { return this->type; }
void  Weapon::setType(const std::string& type) { this->type = type; }
