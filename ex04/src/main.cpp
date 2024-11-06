/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:09:55 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 21:24:59 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string &line, std::ofstream &outfile)
{
	size_t	start = 0;
	size_t	pos;

	while ((pos = line.find(argv[2], start)) != std::string::npos)
	{
		outfile << line.substr(start, pos - start);
		outfile << argv[3];
		start = pos + std::string(argv[2]).size();
	}
	outfile << line.substr(start);
	outfile << '\n';
	return (0);
}

int	main(int argc, char **argv)
{
	std::ifstream	infile;
	std::ofstream	outfile;
	std::string		line;

	if (argc != 4)
	{
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
	if (std::string(argv[2]).empty())
	{
		std::cout << "Error: old_word cannot be empty." << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	if (infile.fail())
	{
		std::cout << "Error: " << argv[1] << ":" <<
		" no such file or directory" << std::endl;
		return (1);
	}
	outfile.open((std::string(argv[1]) + ".replace").c_str());
	 if (outfile.fail())
	{
		std::cout << "Error: Could not open output file for writing." << std::endl;
		return (1);
	}
	while (std::getline(infile, line))
		replace(argv, line, outfile);
	infile.close();
	outfile.close();
	return (0);
}