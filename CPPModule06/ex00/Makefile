# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/12 14:42:08 by rtracee           #+#    #+#              #
#    Updated: 2022/03/12 14:43:15 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Conversion

SRC			=	main.cpp \
				Conversion.cpp

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