# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgusache <sgusache@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/13 17:17:11 by sgusache          #+#    #+#              #
#    Updated: 2019/07/14 15:49:43 by sgusache         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= phonebook

SRC		= main.cpp phonebook.cpp contact.cpp
CFLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	clang++ $(CFLAG) $(SRC) $^ -o $(NAME)

clean:
	rm -rf objects
	/bin/rm -f *.o
	/bin/rm -rf ./objects/*.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all test
