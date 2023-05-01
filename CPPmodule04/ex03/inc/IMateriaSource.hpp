/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:39:35 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 17:45:34 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"
# include <string>

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void) {}

		virtual void		learnMateria(Amateria *m) = 0;
		virtual AMateria	*createMateria(std::string const &type) = 0;
}

#endif
