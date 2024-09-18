/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:42 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:42:07 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef HUMANB_HPP
# define HUMANB_HPP

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
		bool _is_armed;
	public:
	// Constructor
		HumanB(std::string name);
	// Deconstructor
		~HumanB(void);
	// Getter

	// Setter
		void setWeapon(Weapon &weapon);
	// Public Methods
		void attack(void);
};

#endif