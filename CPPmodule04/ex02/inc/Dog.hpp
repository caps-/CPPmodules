/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:20:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 15:18:32 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Aanimal.hpp"
# include "Brain.hpp"

class	Dog : public Aanimal
{
	private:
		Brain	*_brain;
	public:
		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog	&operator=(Dog const &src);

		Brain	*getBrain(void) const;
		void	makeSound(void) const;
};

#endif
