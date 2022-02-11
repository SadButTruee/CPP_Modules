# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/09 17:53:31 by rtracee           #+#    #+#              #
#    Updated: 2022/02/09 19:09:51 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Polymorphizm

SRC			=	main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp
				

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