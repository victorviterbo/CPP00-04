/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:02:40 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/07 22:07:52 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	main(int argc, char *argv[])
{
	int				n_line;
	std::string		curr_line;
	std::string		new_fname;
	std::ifstream	instream;
	std::ofstream	outstream;
	
	if (argc < 2)
	{
		std::cout << "Wrong number of arguments";
		return (2);
	}
	instream.open(argv[1]);
	if (!instream.is_open())
	{
        std::cout << "Error : could not open file" << std::endl;
        return 1;
	}
	new_fname = argv[1];
	new_fname.append(".replace");
	outstream.open(new_fname);
	std::getline(instream, curr_line);
	while (curr_line.length())
	{
		std::getline(instream, curr_line);
		replace(in_stream, curr_line, 
	}
}