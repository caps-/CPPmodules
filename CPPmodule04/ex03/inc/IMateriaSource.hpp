/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:13:15 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 18:40:04 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual	~IMateriaSource(void) {}

		virtual void	learnMateria(AMateria*) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
