/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:33 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/19 16:51:36 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

# define EMPTY -1
# define SUCCESS 0

class	Contact
{
	public:

	// Contact(std::string first_name, std::string last_name, std::string nickname,
	// std::string darkest_secret, int number);
	Contact();
	Contact(Contact const& other);
	~Contact();
	int	first_name();
	int	last_name();
	int	nickname();
	int	phone_number();
	int	darkest_secret();

	private:

	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_phone_number;
	std::string	m_darkest_secret;
};

#endif