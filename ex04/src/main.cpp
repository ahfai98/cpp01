/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 21:09:55 by jyap              #+#    #+#             */
/*   Updated: 2025/01/03 18:59:20 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	replace(char **argv, std::string &line, std::ofstream &outfile)
{
	size_t	start = 0;
	size_t	pos;

	//find position of old_word
	while ((pos = line.find(argv[2], start)) != std::string::npos)
	{
		//output everything before the old_word
		outfile << line.substr(start, pos - start);
		outfile << argv[3]; //input new_word
		start = pos + std::string(argv[2]).size(); //skip to after old_word
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
	if (argv[2][0] == '\0')
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
		infile.close();
		return (1);
	}
	while (std::getline(infile, line))
		replace(argv, line, outfile);
	infile.close();
	outfile.close();
	return (0);
}
