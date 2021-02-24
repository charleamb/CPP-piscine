# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 15:26:39 by user42            #+#    #+#              #
#    Updated: 2021/02/18 17:13:12 by chgilber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Pony

C++ = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

SRC = pony.cpp main.cpp

OBJ = pony.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
