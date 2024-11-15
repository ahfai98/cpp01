/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyap <jyap@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 13:38:27 by jyap              #+#    #+#             */
/*   Updated: 2024/11/15 17:08:59 by jyap             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>
#include <cstdlib>

class Harl {
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
};

// Return_Type (Class_Name::* pointer_name) (Argument_List);
// harl_func_t means vord (Harl::*)(void)
typedef void (Harl::* harl_func_t) (void);

#endif
