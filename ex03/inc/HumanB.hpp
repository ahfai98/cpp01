/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:42 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 15:42:08 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		HumanB();
		HumanB(const std::string &name);
		~HumanB();

		void setWeapon(Weapon &weapon);
		void attack(void) const;

	private:
		std::string	_name;
		Weapon *_weapon;
};

#endif
