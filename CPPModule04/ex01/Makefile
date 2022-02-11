# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 17:53:31 by rtracee           #+#    #+#              #
#    Updated: 2022/02/10 13:15:28 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Brain

SRC			=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp
				

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