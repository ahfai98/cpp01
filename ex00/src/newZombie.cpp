/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:03 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:25:37 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Buckethead Zombie

Zombie *newZombie(std::string name)
{
	Zombie *newZomb = new Zombie(name);
	return (newZomb);
}
