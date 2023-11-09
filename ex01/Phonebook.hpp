/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:27:31 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/24 14:27:16 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class	Phonebook
{
	public:

	//Constructeur & Destructeur

	Phonebook();
	Phonebook(Phonebook const& other);
	~Phonebook();

	//Methodes

	int		add_contact(int index);
	int		search_contact();
	void	run();
	void	fill_contacts();

	private:

	Contact	_contact[8];
};

#endif
