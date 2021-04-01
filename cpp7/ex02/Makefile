# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 15:37:59 by user42            #+#    #+#              #
#    Updated: 2021/04/01 13:33:01 by chgilber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Array

C++ = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

SRC = main.cpp

OBJ = main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(FLAG) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
