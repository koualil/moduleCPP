# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 19:09:35 by mkoualil          #+#    #+#              #
#    Updated: 2024/11/20 21:11:03 by mkoualil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = Zombie.cpp main.cpp newZombie.cpp randomChump.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = Zombie
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)
					
%.o : %.cpp  Zombie.hpp
				c++ -c $(CFLAGS) $< -o $@

clean:	
				$(RM) $(OBJ_FILES)

				
fclean:			clean
				$(RM) $(NAME)
					
re:				fclean $(NAME)