/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 13:25:40 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/22 07:55:14 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook	phonebook;

	phonebook.fill_contacts();
	phonebook.run();
	return (0);
}