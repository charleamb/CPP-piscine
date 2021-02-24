# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/09 15:26:39 by user42            #+#    #+#              #
#    Updated: 2021/02/23 19:09:54 by chgilber         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Zombie

C++ = clang++

FLAG = -Wall -Werror -Wextra -std=c++98

SRC = Zombie.cpp ZombieEvent.cpp main.cpp

OBJ = Zombie.o ZombieEvent.o main.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
