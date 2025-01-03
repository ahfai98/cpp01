/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:36:26 by jyap              #+#    #+#             */
/*   Updated: 2025/01/03 15:42:14 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int	main()
{
	Zombie	*horde;
	int		size;

	size = 10;
	horde = zombieHorde(size, "Horde Member");
	if (horde == NULL)
		return (1);
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete[] horde;
	horde = zombieHorde(0, "Failed");
	if (horde == NULL)
		return (1);
	delete[] horde;
	return (0);
}
