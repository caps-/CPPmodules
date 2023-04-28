/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 03:10:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 03:16:09 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class	Brain
{
	private:
		std::string _ideas[100];

	public:
		Brain(void);
		Brain(Brain const &src);
		Bran &opertor(Brain const &src);
		virtual ~Brain(void);

		//getters and setters
		void	getIdea(int	i) const;
		void	setIdea(int i, std::string idea);
};

#endif
