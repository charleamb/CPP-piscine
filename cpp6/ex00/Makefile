# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 15:37:59 by user42            #+#    #+#              #
#    Updated: 2021/03/24 11:52:49 by chgilber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

C++ = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

SRC = convert.cpp print.cpp

OBJ = convert.o print.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
