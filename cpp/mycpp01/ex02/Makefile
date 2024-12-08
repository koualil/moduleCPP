# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkoualil <mkoualil@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 17:30:25 by mkoualil          #+#    #+#              #
#    Updated: 2024/10/23 19:04:48 by mkoualil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES =  main.cpp 
OBJ_FILES = $(SRC_FILES:.cpp=.o)

NAME = program
CFLAGS = -Wall -Wextra -Werror -std=c++98 
RM = rm -f

all:	$(NAME)

$(NAME):$(OBJ_FILES)
		c++  $(CFLAGS)   $(OBJ_FILES) -o $(NAME)
					
%.o : %.cpp
				c++ -c $(CFLAGS) $< -o $@

clean:	
				$(RM) $(OBJ_FILES)

				
fclean:			clean
				$(RM) $(NAME)
					
re:				fclean $(NAME)