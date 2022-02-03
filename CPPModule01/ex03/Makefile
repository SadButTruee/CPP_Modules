# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/30 16:28:23 by rtracee           #+#    #+#              #
#    Updated: 2022/02/03 10:13:22 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Unnecessary_violence

SRC		=	main.cpp \
			HumanA.cpp \
			HumanB.cpp \
			Weapon.cpp

SRCO	=	$(SRC:.cpp=.o)

HEADER	=	HumanA.hpp \
			HumanB.hpp \
			Weapon.hpp \

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