/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:33 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/18 13:08:42 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact
{
	public:

	// Contact(std::string first_name, std::string last_name, std::string nickname,
	// std::string darkest_secret, int number);
	Contact();
	Contact(Contact const& other);
	~Contact();

	private:

	std::string	m_first_name;
	std::string	m_last_name;
	std::string	m_nickname;
	std::string	m_darkest_secret;
	int			m_number;
};

#endif