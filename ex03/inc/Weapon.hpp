/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:46 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:41:53 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef WEAPON_HPP
# define WEAPON_HPP

// Includes
#include <string>
#include <iostream>

// classes
class Weapon
{
	private:
		std::string	_type;

	public:
	// Constructor
		Weapon(const std::string &weapon);
	// Deconstructors
		~Weapon();
	// Getter
		std::string getType() const;
	// Setter
		void setType(const std::string &weapon);
	// Public Methods

};

#endif