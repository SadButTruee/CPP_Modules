# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 13:01:59 by rtracee           #+#    #+#              #
#    Updated: 2022/02/08 14:55:12 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ScavTrap

SRC			=	main.cpp \
				ClapTrap.cpp \
				ScavTrap.cpp 

SRCO		=	$(SRC:.cpp=.o)

DEPS		=	$(SRCO:.o=.d)

FLAGS		=	-Wall -Wextra -Werror -std=c++98

CPPFLAGS	=	-MMD

all: $(NAME)

$(NAME): $(SRCO)
	c++ ${FLAGS} ${CPPFLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

-include $(DEPS)