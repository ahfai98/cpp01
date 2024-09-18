/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:27 by jyap              #+#    #+#             */
/*   Updated: 2024/09/18 13:41:19 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Header-protection
#ifndef HARL_HPP
# define HARL_HPP

// Includes
#include <string>
#include <iostream>
#include <cstdlib>

// classes

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);

	public:
	// Constructors
		Harl();

	// Deconstructors
		~Harl();

	// Public Methods
		void	complain(std::string level);
	// Getter

	// Setter

};

#endif