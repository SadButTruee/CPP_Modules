# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 15:25:33 by rtracee           #+#    #+#              #
#    Updated: 2022/01/30 15:31:21 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Zombie

SRC		=	main.cpp \
			ZombieHorde.cpp \
			Zombie.cpp

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