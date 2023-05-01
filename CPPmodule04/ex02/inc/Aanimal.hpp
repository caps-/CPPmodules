/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:55:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 15:55:33 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>

/* const = 0 makes the function a pure virtual function. This means that it can't
 * be instantiated on it's own, and instead a derived class that uses the pure
 * virtual function/method has to be used instead. 
 *
 * In other words, unless an object is created using or deriving from the Aanimal
 * class it won't be able to use the makeSound() function.
 *
 * This ALSO means that this Aanimal class is now an ABSTRACT class. Cool! */
class	Aanimal
{
	protected:
		std::string	_type;

	public:
		Aanimal(void);
		Aanimal(Aanimal const &src);
		virtual ~Aanimal(void);

		Aanimal	&operator=(Aanimal const &src);

		virtual void		makeSound(void) const = 0;
};

#endif
