/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:17:07 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 15:15:25 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("New Zombie");
	Zombie a("ZombieA");
	zombie->announce();
	delete zombie;
	randomChump("Basic Zombie");
	//delete zombie;
	a.announce();
	return (0);
}
