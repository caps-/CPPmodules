/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:39:20 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 19:01:58 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <string>

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(AMateria const &src);
		AMateria(std::string const &type);
		virtual ~AMateria(void);

		AMateria &operator=(AMateria const &src);

		std::string	const &getType(void) const;
		virtual		AMateria *clone(void) const = 0;
		virtual		void use(ICharacter &target);
};

#endif
