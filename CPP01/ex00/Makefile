# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoinus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 16:46:54 by acoinus           #+#    #+#              #
#    Updated: 2022/06/11 14:42:33 by acoinus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Philozombies

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	main.cpp\
		newZombie.cpp\
		randomChump.cpp\
		Zombie.cpp\

all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

re : 	fclean all

clean :
		rm -f $(NAME)

fclean : clean

re : fclean all
