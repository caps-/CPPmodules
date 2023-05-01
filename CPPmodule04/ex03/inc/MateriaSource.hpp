/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 17:42:31 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 17:51:06 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*templates[4]
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource;

		MateriaSource &operator=(MateriaSource const &src);

		void		learnMateria(AMateria *m);
		AMateria	*createMatieria(std::string const &ype);
}
