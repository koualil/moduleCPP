# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/23 10:48:56 by mkoualil          #+#    #+#              #
#    Updated: 2024/12/24 10:27:48 by mkoualil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC_FILES = Animal.cpp Dog.cpp Cat.cpp main.cpp Brain.cpp
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = Animal
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)
					
%.o : %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
				c++ -c $(CFLAGS) $< -o $@

clean:	
				$(RM) $(OBJ_FILES)

				
fclean:			clean
				$(RM) $(NAME)
					
re:				fclean $(NAME)