# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 15:26:39 by user42            #+#    #+#              #
#    Updated: 2021/02/20 11:00:56 by chgilber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = leak

C++ = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

SRC = ex01.cpp

OBJ = ex01.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
