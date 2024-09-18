/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:16:56 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:16:57 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

// Basic Zombie

void randomChump(std::string name)
{
	Zombie basic_zombie(name);
	basic_zombie.announce();
}