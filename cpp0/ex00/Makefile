# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/06 15:37:59 by user42            #+#    #+#              #
#    Updated: 2021/02/06 15:38:43 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C++ = clang++

FLAG = -Wall -Werror -Wextra

SRC = megaphone.cpp

OBJ = megaphone.o

all : $(NAME)

$(NAME) : $(OBJ)
		$(C++) $(OBJ) -o $(NAME)

clean :
		rm -rf $(OBJ)

fclean : clean
		rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re
