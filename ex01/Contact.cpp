/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:35:54 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/19 16:48:56 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
// 	std::string darkest_secret, int phone_number)
// {
// 	m_first_name = first_name;
// 	m_last_name = last_name;
// 	m_nickname = nickname;
// 	m_darkest_secret = darkest_secret;
// 	m_phone_number = phone_number;
// }

Contact::Contact()
{
	std::cout << "First Name: ";
	std::cin >> m_first_name;

	std::cout << "Last Name: ";
	std::cin >> m_last_name;

	std::cout << "Nickname: ";
	std::cin >> m_nickname;

	std::cout << "Darkest Secret: ";
	std::cin >> m_darkest_secret;

	std::cout << "Phone Number: ";
	std::cin >> m_phone_number;
}

Contact::Contact(Contact const& other): m_first_name(other.m_first_name), m_last_name(other.m_last_name),
m_nickname(other.m_nickname), m_darkest_secret(other.m_darkest_secret), m_phone_number(other.m_phone_number)
{
}

Contact::~Contact()
{
}

int	Contact::first_name()
{
	std::cout << "First Name: ";
	std::getline(std::cin, this->m_first_name);
	if (m_first_name.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::last_name()
{
	std::cout << "Last Name: ";
	std::getline(std::cin, this->m_last_name);
	if (m_last_name.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::nickname()
{
	std::cout << "Nickname: ";
	std::getline(std::cin, this->m_nickname);
	if (m_nickname.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::darkest_secret()
{
	std::cout << "Darkest Secret: ";
	std::getline(std::cin, this->m_darkest_secret);
	if (m_darkest_secret.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}

int	Contact::phone_number()
{
	std::cout << "Phone Number: ";
	std::getline(std::cin, this->m_phone_number);
	if (m_phone_number.length() == 0)
		return (EMPTY);
	return (SUCCESS);
}