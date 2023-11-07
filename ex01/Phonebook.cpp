/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:26:47 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/22 08:04:05 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

//******************************************************************//
//						CONSTRUCTEUR & DESTRUCTEUR					//
//******************************************************************//

Phonebook::Phonebook()
{
	// std::cout << "Phonebook was created." << std::endl;
}

Phonebook::Phonebook(Phonebook const& other)
{
	for (int i = 0; i < 8; i++)
		contact[i] = other.contact[i];
	std::cout << "Phonebook was copied." << std::endl;
}

Phonebook::~Phonebook()
{
	// std::cout << "Phonebook was destroyed." << std::endl;
}

//******************************************************************//
//								METHODES							//
//******************************************************************//

int	Phonebook::add_contact(int index)
{
	Contact	contact_tmp;

	if (contact_tmp.first_name() == SUCCESS)
		if (contact_tmp.last_name() == SUCCESS)
			if (contact_tmp.nickname() == SUCCESS)
				if (contact_tmp.phone_number() == SUCCESS)
					if (contact_tmp.darkest_secret() == SUCCESS)
					{
						this->contact[index] = contact_tmp;
						std::cout << "A new contact was added." << std::endl;
						return (SUCCESS);
					}
	std::cout << "Leave no slot empty. New contact hasn't been created." << std::endl;
	return (EMPTY);
}

int	Phonebook::search_contact()
{
	int	index = 0;
	std::string	input;

	std::cout << std::endl << "o------------------------------------o" << std::endl;
	std::cout << "|" << "Idx" << "|" << "First Name" << "|"
				<< " Last Name" << "|" << "  Nickname" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|---|----------|----------|----------|" << std::endl;
		this->contact[i].show_contacts(i + 1);
	}
	std::cout << "o------------------------------------o" << std::endl;
	std::cout << std::endl << "Which contact do you want to consult?" << std::endl;
	while (index < 1 || index > 8)
	{
		std::cout << "Type index: ";
		std::getline(std::cin, input);
		if (!input.empty() && std::istringstream(input) >> index && index > 0 && index < 8)
			this->contact[index - 1].display_contact();
		else
			std::cout << "This phonebook is annoyingly limited. Sorry for the inconvenience. Please enter a number between 1 and 8." << std::endl;
	}
	return (SUCCESS);
}

void	Phonebook::run()
{
	std::string	Command;
	int			nb_contact = 0;

	while (Command != "EXIT")
	{
		if (nb_contact == 8)
			nb_contact = 0;
		std::cout << "You may enter the command you wish to execute (ADD, SEARCH or EXIT): ";
		std::getline(std::cin, Command);
		if (Command == "ADD")
		{
			if (Phonebook::add_contact(nb_contact) == SUCCESS)
				nb_contact++;
		}
		else if (Command == "SEARCH")
			Phonebook::search_contact();
		else if (Command != "EXIT")
			std::cout << "Invalid command, please type ADD, SEARCH or EXIT" << std::endl;
	}
}

void	Phonebook::fill_contacts()
{
	this->contact[0] = Contact("Clement", "Bernazeau", "Kiki", "Aime les vaches", "0553");
	this->contact[1] = Contact("Pablo", "Cheron", "Pablito", "Joue trop a pokemon", "0554");
	this->contact[2] = Contact("Lisa Estelle", "Duheron", "David Finshark", "Aime les dinosaures", "0555");
	this->contact[3] = Contact("Alban", "Tardif", "Albibou", "A trop regarde le Parrain", "0556");
	this->contact[4] = Contact("Axel", "Kusniak", "Axel Vierge", "N'est jamais la", "0557");
	this->contact[5] = Contact("Alan", "De Freitas", "Phoenix des hotes de ses bois", "Bouffe trop au resto", "0558");
	this->contact[6] = Contact("Alban", "Montigny", "Alban Minishell", "Ne sait pas coder", "0559");
}