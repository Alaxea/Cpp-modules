# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alicja <alicja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/30 17:11:20 by alicja            #+#    #+#              #
#    Updated: 2025/03/30 20:46:15 by alicja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
NAME = Animal
SRC_DIR = src
INCLUDE_DIR = includes
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
OBJ = $(SRC:%.cpp=$(SRC_DIR)/%.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@
$(SRC_DIR)/%.o: %.cpp
	$(CC) $(CFLAGS) -I$(INCLUDE_DIR) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)