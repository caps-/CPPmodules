/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:40:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 19:10:00 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_techniques[4];
		void		_initTechniques(void);
		void		_deleteTechniques(void);

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);

		MateriaSource	&operator=(MateriaSource const &src);

		void		learnMateria(AMateria*);
		AMateria	*createMateria(std::string const &type);
};

#endif
