/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:39 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:41:01 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef HUMANA_HPP
# define HUMANA_HPP

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
	// Constructor
		HumanA(std::string name, Weapon &weapon);
	// Deconstructor
		~HumanA(void);
	// Getter

	// Setter

	// Pubilc Methods
		void attack(void);
};

#endif