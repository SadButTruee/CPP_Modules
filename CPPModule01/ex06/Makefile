# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 14:21:34 by rtracee           #+#    #+#              #
#    Updated: 2022/02/03 15:42:36 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	karenFilter

SRC		=	main.cpp \
			Karen.cpp

HEADER	=	Karen.hpp

SRCO	= $(SRC:.cpp=.o)

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCO)
	c++ ${FLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re