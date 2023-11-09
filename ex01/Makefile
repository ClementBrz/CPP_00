# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 12:23:59 by cbernaze          #+#    #+#              #
#    Updated: 2023/11/09 12:18:16 by cbernaze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SOURCES =	main.cpp		\
			Phonebook.cpp	\
			Contact.cpp		\

CXX = c++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98 -g3

OBJETS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJETS)
		$(CXX) $(CXXFLAGS) $(OBJETS) -o $(NAME)

clean:
		@rm -f $(OBJETS)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re