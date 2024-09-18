/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:58:14 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:18:55 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
	// Constructors
		Zombie(std::string s);
	// Deconstructors
		~Zombie();
	// Public Methods
		void	announce(void)const;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif