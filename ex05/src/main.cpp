/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:53 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 16:24:08 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Harl.hpp"

int main()
{
	Harl	harl;

	std::cout << "Use ERROR, WARNING, INFO or DEBUG to make Harl complain." << std::endl << std::endl;
	harl.complain("ERROR");
	std::cout << std::endl;
	harl.complain("WARNING");
	std::cout << std::endl;
	harl.complain("INFO");
	std::cout << std::endl;
	harl.complain("DEBUG");
	std::cout << std::endl;
	std::cout << "Harl can complain 5 times. Make him." << std::endl << std::endl;
	for (int i = 0; i < 5; i++)
	{
		std::cout << "input: ";
		std::string input;
		getline(std::cin, input);
		if (std::cin.eof() == true)
		{
			std::cerr << "You pressed ^D. Exiting ..." << std::endl;
			exit(1);
		}
		harl.complain(input);
		std::cout << std::endl;
	}
	std::cout << "No more complaints from Harl." << std::endl << std::endl;
	return (0);
}
