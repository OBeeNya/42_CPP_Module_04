
NAME =				poly

SRCS =				main.cpp \
					Animal.cpp \
					Dog.cpp \
					Cat.cpp \
					WrongAnimal.cpp \
					WrongCat.cpp

OBJS =				${SRCS:.cpp=.o}

C++ =				c++

FLAGS =				-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

RM =				rm -rf

all:				${NAME}

.c.o:
	${C++} ${FLAGS} -c $< -o

${NAME}:			${OBJS}
	${C++} ${FLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:				clean
	${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re
