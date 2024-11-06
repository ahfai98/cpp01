/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:39 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 20:32:44 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();

		void attack(void) const;

	private:
		std::string	_name;
		Weapon& _weapon;
};

#endif
