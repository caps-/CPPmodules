/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:07:42 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 18:09:13 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		virtual	~AMateria(void);

		AMateria &operator=(AMateria const &src);

		//getters and setters
		std::string const	&getType(void) const;
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
