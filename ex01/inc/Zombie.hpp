/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:40:11 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 14:15:14 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

// includes
#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
	private:
		std::string	_name;
	public:
	// Constructors
		Zombie();
		Zombie(std::string name);
	// Deconstructors
		~Zombie();
	// Public Methods
		void	announce(void);
		void	set_name(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
