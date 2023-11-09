NAME := accounts
CXX := c++
CXXFLAGS := -Wall -Werror -Wextra -std=c++98 -g3
PATH_OBJS := objs
SRCS := tests.cpp Account.cpp
HEADERS := Account.hpp
OBJS := ${patsubst %.cpp, ${PATH_OBJS}/%.o, ${SRCS}}

all: ${NAME}

${OBJS}: ${PATH_OBJS}/%.o: %.cpp ${HEADERS}
	@mkdir -p ${PATH_OBJS}
	${CXX} ${CXXFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o $@

clean:
	rm -rf ${PATH_OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean ${NAME}

.PHONY: all clean fclean re