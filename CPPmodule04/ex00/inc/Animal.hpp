/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:55:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 19:09:53 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class	Animal
{
	protected:
		st::string	_type;

	public:
		Animal(void);
		Animal(Animal const &src);
		Animal(std::string const &type);
		virtual ~Animal(void);

		Animal	&operator=(Animal const &src);

		std::string const	&getType(void) const;
		virtual void		makeSound(void) const;
}

#endif
