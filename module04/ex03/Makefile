# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 14:25:20 by mkoualil          #+#    #+#              #
#    Updated: 2024/12/22 00:48:08 by mkoualil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_FILES = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = Diamond
CFLAGS = -Wall -Wextra -Werror  -Wshadow  -std=c++98 
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)
					
%.o : %.cpp  ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
				c++ -c $(CFLAGS) $< -o $@

clean:	
				$(RM) $(OBJ_FILES)

				
fclean:			clean
				$(RM) $(NAME)
					
re:				fclean $(NAME)