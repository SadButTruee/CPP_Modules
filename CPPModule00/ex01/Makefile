# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtracee <rtracee@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/29 16:34:57 by rtracee           #+#    #+#              #
#    Updated: 2022/01/29 17:32:19 by rtracee          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = My_Awesome_PhoneBook

SRC = main.cpp functions.cpp Contact.cpp

HEADER = Phonebook.hpp Contact.hpp

SRCO = $(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(SRCO) $(HEADER)
	c++ ${FLAGS} -o ${NAME} ${SRCO}

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re