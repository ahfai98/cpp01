/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:08 by jyap              #+#    #+#             */
/*   Updated: 2025/01/03 19:17:26 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

// Constructors
Harl::Harl(){}

// Deconstructors
Harl::~Harl(){}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger!\nIf you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	harl_func_t	harl_funcs[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			switch (i)
			{
				case 0:
					for (int j = i; j < 4; j++)
                		(this->*harl_funcs[j])();
					break;
				case 1:
					for (int j = i; j < 4; j++)
                		(this->*harl_funcs[j])();
					break;
				case 2:
					for (int j = i; j < 4; j++)
                		(this->*harl_funcs[j])();
					break;
				case 3:
					for (int j = i; j < 4; j++)
                		(this->*harl_funcs[j])();
					break;
				default:
					break;
			}
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
