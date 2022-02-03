# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 12:23:50 by rtracee           #+#    #+#              #
#    Updated: 2022/01/30 12:41:30 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRC		=	main.cpp \
			newZombie.cpp \
			randomChump.cpp \
			Zombie.cpp \

HEADER	=	Zombie.h Zombie.hpp

SRCO		= $(SRC:.cpp=.o)

FLAGS	= -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCO) $(HEADER)
	c++ ${FLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re