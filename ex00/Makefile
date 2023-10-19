# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbernaze <cbernaze@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/17 12:23:59 by cbernaze          #+#    #+#              #
#    Updated: 2023/10/17 12:41:53 by cbernaze         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SOURCES = megaphone.cpp

CXX = g++

CXXFLAGS = -Wall -Werror -Wextra -std=c++98

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