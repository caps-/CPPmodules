/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sed.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:00:37 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 18:49:19 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

std::string	ft_replace(std::string line, std::string s1, std::string s2)
{
	unsigned long	position = 0;
	
	while ((position = line.find(s1, position)) != std::string::npos)
	{
		line.erase(position, s1.length());
		line.insert(position, s2);
		position += s2.length();
	}
	return (line);
}

void	ft_sed(std::string filename, std::string s1, std::string s2)
{
	std::string		line; //the string/line we need to find with getline()
	std::ifstream	ifs(filename); //input file
	std::ofstream	ofs(filename + ".replace"); //new output file

	if (!ifs.is_open())//return an error msg if the input file can't be opened
	{
		std::cout << RED << ST03 << RST << std::endl;
		exit(0);
	}
	while (std::getline(ifs, line))//find the line in the input file stream
	{
		ofs << ft_replace(line, s1, s2) << std::endl; //replace!
		std::cout << GRN << ST04 << filename << ST05 << RST << std::endl;
	}
	ifs.close(); //close input stream
	ofs.close(); //close output stream
}
