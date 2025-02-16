# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alicja <alicja@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/10 17:56:53 by alicja            #+#    #+#              #
#    Updated: 2025/02/16 14:20:27 by alicja           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
NAME = phonebook
SRC = Contact.cpp PhoneBook.cpp main.cpp
OBJ = $(SRC:.cpp=.o)
all: $(NAME)
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $@
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJ)
fclean: clean
	$(RM) $(NAME)
re: fclean $(NAME)

.PHONY: all clean fclean re 