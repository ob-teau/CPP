# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoinus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 16:46:54 by acoinus           #+#    #+#              #
#    Updated: 2022/06/08 18:39:13 by acoinus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = 	Contact.class.cpp\
		main.cpp\
		PhoneBook.class.cpp\


all : $(NAME)

$(NAME) : $(SRCS)
		c++ $(FLAGS) $(SRCS) -o $(NAME)

re : 	fclean all

clean :
		rm -f $(NAME)

fclean : clean

re : fclean all
