/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:35:54 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/18 13:32:14 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact::Contact(std::string first_name, std::string last_name, std::string nickname,
// 	std::string darkest_secret, int number)
// {
// 	m_first_name = first_name;
// 	m_last_name = last_name;
// 	m_nickname = nickname;
// 	m_darkest_secret = darkest_secret;
// 	m_number = number;
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
	std::cin >> m_number;
}

Contact::Contact(Contact const& other): m_first_name(other.m_first_name), m_last_name(other.m_last_name),
m_nickname(other.m_nickname), m_darkest_secret(other.m_darkest_secret), m_number(other.m_number)
{
}

Contact::~Contact()
{
}
