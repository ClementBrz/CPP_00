/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:26:47 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/19 16:53:30 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{

}

Phonebook::Phonebook(Phonebook const& other)
{
	for (int i = 0; i < 8; i++)
		contact[i] = other.contact[i];
}

Phonebook::~Phonebook()
{
}

int	Phonebook::add_contact(int index)
{
	Contact	contact_tmp;

	if (contact_tmp.first_name() == SUCCESS)
		if (contact_tmp.last_name() == SUCCESS)
			if (contact_tmp.nickname() == SUCCESS)
				if (contact_tmp.phone_number() == SUCCESS)
					if (contact_tmp.darkest_secret() == SUCCESS)
						return (this->contact[index] = contact_tmp, SUCCESS);
}

int	Phonebook::search_contact()
{

}

int	Phonebook::exit_phonebook()
{

}

int	Phonebook::run()
{
	std::string	Command;

	while (1)
	{
		std::cin >> Command;
		if (Command == "ADD")
			Phonebook::add_contact();
		else if (Command == "SEARCH")
			Phonebook::search_contact();
		else if (Command == "EXIT")
			Phonebook::exit_phonebook();
		else
			std::cout << "Invalid command, please type ADD, SEARCH or EXIT" << std::endl;
	}
}