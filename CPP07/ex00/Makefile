# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acoinus <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/07 16:46:54 by acoinus           #+#    #+#              #
#    Updated: 2022/06/23 17:19:58 by acoinus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	swap

CC		=	c++
CFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98 # -I $(INC)
CDEP	=	-MMD
CFA		=	-fsanitize=address -g3
RM		=	/usr/bin/rm -rf

SRC		=	main.cpp\

OBJ		=	$(SRC:%.cpp=Objs/%.o)
DEP		=	$(SRC:%.cpp=Objs/%.d)

all	: obj $(NAME)

-include $(DEP)

$(NAME)	: $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

obj :
		@if [ ! -d "./Objs" ]; then\
			echo "mkdir -p Objs";\
			mkdir -p Objs;\
		fi
			@echo ""

Objs/%.o	:	%.cpp
				$(CC) -o $@ -c $< $(CFLAGS) $(CDEP)

clean 		:
				$(RM) $(OBJ)
				$(RM) Objs

fclean		:	clean
				$(RM) $(NAME)

fsa			:	fclean obj $(OBJ)
				$(CC) $(CFLAGS) $(CDEP) $(CFA) -o $(NAME) $(SRC)

re			:	fclean all

.PHONY		:	all obj clean fclean fsa re
