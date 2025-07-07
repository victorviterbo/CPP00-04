/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 13:25:50 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/12 13:30:23 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP


# include <cstdio>
# include <iostream>
# include <iomanip>
# include <sstream>
# include <string>

class Harl {
	public:
		Harl() {};
		~Harl() {};
 		void	complain(std::string level);
	private:
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
};

#endif