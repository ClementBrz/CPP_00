/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:36:33 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/24 14:25:07 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <limits>
# include <sstream>

# define EMPTY -1
# define SUCCESS 0

class	Contact
{
	public:

	//Constructeur & Destructeur

	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname,
			std::string darkest_secret, std::string phone_number);
	// Contact(Contact const& other);
	~Contact();

	//Methodes

	void	contact_infos(std::string info);
	void	show_contacts(int index);
	void	display_contact();
	int		first_name();
	int		last_name();
	int		nickname();
	int		phone_number();
	int		darkest_secret();

	private:

	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;
};

#endif