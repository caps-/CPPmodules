/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:51:58 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 16:53:47 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure(void);
		Cure(Cure const &src);
		virtual ~Cure(void);

		Cure &operator=(Cure const &src);

		virtual	AMateria	*clone(void) const;
		virtual	void		use(ICharacter &target);
};

#endif
