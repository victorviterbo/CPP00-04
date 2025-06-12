/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/28 16:02:40 by vviterbo          #+#    #+#             */
/*   Updated: 2025/06/12 13:18:09 by vviterbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <algorithm>

int	count_substr(std::string str, std::string to_match)
{
	size_t	i;
	int		count;

	i = 0;
	count = 0;
	if (str.length() < to_match.length())
		return (0);
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

void	replace_substr(std::string& str, std::string to_repl, std::string repl_w, size_t &eol)
{
	size_t		i;
	std::string	tmp;
	

	i = 0;
	eol = 0;
	tmp.resize(str.length() + count_substr(str, to_repl) * (repl_w.length() - to_repl.length()));
	while (i < str.length())
	{
		if (str.compare(i, to_repl.length(), to_repl, 0, to_repl.length()) == 0)
		{
			tmp += repl_w;
			if (eol == 0 && to_repl.find('\n') != std::string::npos)
				eol = tmp.length();
			i += to_repl.length();
		}
		else
		{
			tmp += str[i];
			i++;
		}
	}
	str = tmp;
}

int	main(int argc, char *argv[])
{
	int				n_lines;
	size_t			eol;
	std::string		new_str;
	std::string		new_line;
	std::string		lines;
	std::string		to_repl;
	std::string		repl_w;
	std::string		new_fname;
	std::ifstream	instream;
	std::ofstream	outstream;
	
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (2);
	}
	to_repl = argv[2];
	repl_w = argv[3];
	instream.open(argv[1]);
	if (!instream.is_open())
	{
        std::cout << "Error : could not open file" << std::endl;
        return 1;
	}
	new_fname = argv[1];
	new_fname.append(".replace");
	outstream.open(new_fname.c_str());
	n_lines = std::count(to_repl.begin(), to_repl.end(), '\n');
	std::getline(instream, new_line);
	if (n_lines)
	{
		lines = new_line + '\n';
		while (n_lines && new_line.length())
		{
			std::getline(instream, new_line);
			new_line += "\n";
			lines.append(new_line);
			n_lines--;
		}
	}
	else
		lines = new_line;
	replace_substr(lines, to_repl, repl_w, eol);
	while (std::getline(instream, new_line))
	{
		if (to_repl.find('\n') != std::string::npos)
		{
			if (!eol)
				eol = lines.find('\n');
			outstream << lines.substr(0, eol);
			new_line += '\n';
			lines.erase(0, eol);
		}
		else
		{
			outstream << lines << '\n';
			lines.clear();
		}
		lines.append(new_line);
		replace_substr(lines, to_repl, repl_w, eol);
	}
	outstream << lines;
	outstream << std::endl;
	outstream.close();
	instream.close();
}
