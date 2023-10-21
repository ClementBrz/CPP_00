/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:25:40 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/21 17:59:24 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook	phonebook;
	// std::string	test;

	// std::getline(std::cin, test);
	// phonebook.fill_contacts();
	phonebook.run();
	return (0);
}