/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:39:46 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 20:24:46 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon 
{
	public:
		Weapon();
		Weapon(const std::string& type);
		~Weapon();

		const std::string& getType(void) const;
		void  setType(const std::string& type);

	private:
		std::string _type;
};

#endif
