/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:46 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 16:17:21 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

// Constructors
Harl::Harl()
{}

// Deconstructors
Harl::~Harl()
{}

// Private Methods
void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

// Public Methods
void	Harl::complain(std::string level)
{
	void	(Harl::*functionPTRS[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (complains[i] == level)
		{
			(this->*functionPTRS[i])();
			return ;
		}
	}
	std::cout << "Harl remains silent ..." << std::endl;
}

