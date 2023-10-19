/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:27:31 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/19 16:53:04 by cbernaze         ###   ########.fr       */
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
	int	add_contact(int index);
	int	search_contact();
	int	exit_phonebook();
	int	run();

	private:

	Contact	contact[8];
};

#endif
