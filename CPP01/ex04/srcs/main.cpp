/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:02:40 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/11 09:52:47 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

int	count_substr(std::string str, std::string to_match)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	while (i < str.length() - to_match.length())
	{
		if (str.compare(i, to_match.length(), to_match, 0, to_match.length()) == 0)
		{
			i += to_match.length();
			count++;
		}
		else
			i++;
	}
	return (count);
}

void	replace_substr(std::string& str, std::string to_repl, std::string repl_w)
{
	size_t		i;
	size_t		j;
	std::string	tmp;
	

	i = 0;
	j = 0;
	tmp.resize(str.length() + count_substr(str, to_repl) * (repl_w.length() - to_repl.length()));
	while (i < str.length())
	{
		std::cout << i << std::endl;
		std::cout << tmp << std::endl;
		if (str.compare(i, to_repl.length(), to_repl, 0, to_repl.length()) == 0)
		{

			std::cout << "before concat :" << tmp << i << " " << j << std::endl;
			tmp += repl_w;
			std::cout << "after concat :" << tmp << std::endl;
			i += to_repl.length();
			j += repl_w.length();
		}
		else
		{
			std::cout << "normal addition " << i << " " << j << std::endl;
			std::cout << "before add :" << tmp << i << " " << j << std::endl;
			tmp += str[i];
			std::cout << "after add :" << tmp << std::endl;
			i++;
			j++;
		}
	}
	str = tmp;
	std::cout << str << std::endl;
	exit (0);
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
	to_repl = argv[2];
	repl_w = argv[3];
	std::cout << argv[0] << argv[1] << argv[2] << argv[3] << std::endl;
	instream.open(argv[1]);
	if (!instream.is_open())
	{
        std::cout << "Error : could not open file" << std::endl;
        return 1;
	}
	new_fname = argv[1];
	new_fname.append(".replace");
	outstream.open(new_fname);
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
	while (1)//
	{
		std::getline(instream, new_line);
		std::cout << lines << std::endl;
		replace_substr(lines, to_repl, repl_w);
		if (to_repl.find('\n') != std::string::npos)
		{
			std::cout << "coucou 1" << std::endl;
			outstream << lines.substr(0, lines.find('\n'));
			lines.erase(0, lines.find('\n') + 1);
		}
		else
		{
			std::cout << "coucou 2 :::" << lines << std::endl;
			outstream << lines << '\n';
			lines.clear();
			std::cout << "lala" << std::endl;
		}
		lines.append(new_line);
		std::cout << "daf" << std::endl;
	}
}
