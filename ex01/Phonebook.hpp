/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:27:31 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/18 14:07:04 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook
{
	public:
	
	Phonebook();
	Phonebook(Phonebook const& other);
	~Phonebook();

	private:
	
	Contact	contact[8];
};

#endif
