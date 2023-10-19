/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:43:30 by cbernaze          #+#    #+#             */
/*   Updated: 2023/10/17 16:54:49 by cbernaze         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
	std::string				str;
	std::string				message;

	message = (argc == 1) ? "* LOUD AND UNBEARABLE FEEDBACK NOISE *" : "";

	for (int i = 1; i < argc; i++)
		str += argv[i];
	for (std::string::size_type i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	std::cout << message<< str << std::endl;
	return 0;
}
