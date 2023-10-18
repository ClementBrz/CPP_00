/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:26:47 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/18 14:07:12 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	std::string	command;

	while (1)
	{
		std::cin >> command;
		command == "ADD" ? add_contact() : "";
		command == "SEARCH" ? search_contact() : "";
		command == "EXIT" ? exit(0) : "";
	}
}

Phonebook::Phonebook(Phonebook const& other)
{
	for (int i = 0; i < 8; i++)
		contact[i] = other.contact[i];
}

Phonebook::~Phonebook()
{
}