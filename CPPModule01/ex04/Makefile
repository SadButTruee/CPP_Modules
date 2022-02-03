# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 12:52:09 by rtracee           #+#    #+#              #
#    Updated: 2022/02/03 13:03:49 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Sed_is_for_losers

SRC		=	main.cpp \
			Sed_is_for_losers.cpp

HEADER	=	Sed_is_for_losers.h

SRCO	= $(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror -std=c++98

TFILE	=	test test.replace

all: $(NAME)

$(NAME): $(SRCO)
	c++ ${FLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME) $(TFILE)

re: fclean all

.PHONY: all clean fclean re