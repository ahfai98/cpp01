/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:37:42 by jyap              #+#    #+#             */
/*   Updated: 2025/01/03 15:45:19 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of string:\t" << &string << std::endl;
	std::cout << "Address of stringPTR:\t" << stringPTR << std::endl;
	std::cout << "Address of stringREF:\t" << &stringREF << std::endl;

	std::cout << std::endl;

	std::cout << "Value of string:\t\t" << string << std::endl;
	std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	std::cout << "Value of stringREF:\t\t" << stringREF << std::endl;

	return (0);
}
