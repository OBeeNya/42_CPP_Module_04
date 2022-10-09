
NAME =				materia

SRCS =				main.cpp \
					AMateria.cpp \
					Ice.cpp \
					ICharacter.cpp \
					Cure.cpp \
					Character.cpp

OBJS =				${SRCS:.cpp=.o}

C++ =				c++

FLAGS =				-Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98 -g3

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
