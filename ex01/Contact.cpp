/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:35:54 by cbernaze          #+#    #+#             */
/*   Updated: 2023/11/09 12:06:03 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

//******************************************************************//
//						CONSTRUCTEUR & DESTRUCTEUR					//
//******************************************************************//

Contact::Contact()
{
	// std::cout << "Contact was created." << std::endl;
}

Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
	std::string darkest_secret, std::string phone_number)
{
	_first_name = first_name;
	_last_name = last_name;
	_nickname = nickname;
	_darkest_secret = darkest_secret;
	_phone_number = phone_number;
}

Contact::~Contact()
{
	// std::cout << "Contact was destroyed." << std::endl;
}

//******************************************************************//
//								METHODES							//
//******************************************************************//

void	Contact::contact_infos(std::string info)
{
	if (info.length() >= 10)
		std::cout << info.substr(0,9) << "." << "|";
	else
		std::cout << std::setfill(' ') << std::setw(10) << info.substr(0,10) << "|";
}

void	Contact::show_contacts(int index)
{
	std::cout << "| " << index << " |";
	contact_infos(this->_first_name);
	contact_infos(this->_last_name);
	contact_infos(this->_nickname);
	std::cout << std::endl;
}

int	Contact::first_name()
{
	std::cout << "First Name: ";
	std::getline(std::cin, this->_first_name);
	if (_first_name.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::last_name()
{
	std::cout << "Last Name: ";
	std::getline(std::cin, this->_last_name);
	if (_last_name.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::nickname()
{
	std::cout << "Nickname: ";
	std::getline(std::cin, this->_nickname);
	if (_nickname.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::phone_number()
{
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->_phone_number);
	if (_phone_number.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::darkest_secret()
{
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->_darkest_secret);
	if (_darkest_secret.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

void	Contact::display_contact()
{
	std::cout << std::endl;
	std::cout << "First Name: " << this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
	std::cout << std::endl;
}