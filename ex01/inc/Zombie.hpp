/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:40:11 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:40:38 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// Header-protection
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// includes
#include <string>
#include <iostream>

// classes
class Zombie
{
	private:
		std::string	_name;
	public:
	// Constructors
		Zombie();
	// Deconstructors
		~Zombie();
	// Public Methods
		void	announce(void)const;
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif