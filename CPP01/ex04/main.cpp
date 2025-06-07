/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:02:40 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/08 00:23:03 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

bool	contains_substr(std::string str, std::string to_match)
{
	size_t	i;

	i = 0;
	while (i < str.length() - to_match.length() + 1)
	{
		if (str.compare(i, to_match.length(), to_match, 0, to_match.length()))
			return (true);
		i++;
	}
	return (false);
}

void	replace_substr(std::string& str, std::string to_repl, std::string repl_w)
{
	size_t		i;
	size_t		j;
	std::string	tmp;
	

	i = 0;
	j = 0;
	while (i < str.length() - to_repl.length() + 1)
	{
		if (str.compare(i, to_repl.length(), to_repl, 0, to_repl.length()))
		{
			tmp += repl_w;
			i += to_repl.length();
			j += repl_w.length();
		}
		else
		{
			tmp[j] = str[i];
			i++;
		}
		
	}
}

int	main(int argc, char *argv[])
{
	int				n_lines;
	std::string		new_str;
	std::string		new_line;
	std::string		lines;
	std::string		to_repl;
	std::string		repl_w;
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
	to_repl = argv[2];
	repl_w = argv[3];
	//instream.seekg (0, instream.beg);
	n_lines = std::count(to_repl.begin(), to_repl.end(), '\n');
	std::getline(instream, new_line);
	lines = new_line;
	while (n_lines && new_line.length())
	{
		lines.append(new_line);
		std::getline(instream, new_line);
		n_lines--;
	}
	while (std::getline(instream, new_line))
	{
		if (contains_substr(lines, to_repl))
			replace_substr(lines, to_repl, repl_w);
		outstream << lines.substr(0, lines.find('\n'));
		lines.erase(0, lines.find('\n'));
		lines.append(new_line);
	}
}
