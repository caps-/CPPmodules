/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:47:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 16:51:50 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public Amateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);

		Ice	&operator=(Ice const &src);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
