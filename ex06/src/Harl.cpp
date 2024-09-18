/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:08 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 22:24:07 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

// Constructors
Harl::Harl()
{
}

// Deconstructors
Harl::~Harl()
{
}

// Private Methods
void	Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

// Public Methods
void	Harl::complain(std::string level)
{
	void    (Harl::*functionPTRS[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string complains[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i = 0;
	for (; i < 4; i++)
	{
		if (complains[i] == level)
			break ;
	}
	switch(i)
	{
		case(0):
			(this->*functionPTRS[0])();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case(1):
			(this->*functionPTRS[1])();
			std::cout << std::endl;
			 __attribute__ ((fallthrough));
		case(2):
			(this->*functionPTRS[2])();
			std::cout << std::endl;
			__attribute__ ((fallthrough));
		case(3):
			(this->*functionPTRS[3])();
			std::cout << std::endl;
			break;

		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl << std::endl;
			break;
	}
}
// Getter

// Setter

