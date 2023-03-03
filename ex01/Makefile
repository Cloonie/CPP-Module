# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mliew <mliew@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 23:45:34 by mliew             #+#    #+#              #
#    Updated: 2023/02/26 23:45:34 by mliew            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CC			=	g++
CPPFLAGS	=	-Wall -Wextra -Werror
CPPFLAGS	+=	-std=c++98
RM			=	rm -rf

SRCS		=	main.cpp		\
				Contact.cpp		\
				PhoneBook.cpp	\

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	@echo Removing object files...
	@$(RM) $(OBJS_DIR)

fclean: clean
	@echo Removing program file...
	@$(RM) $(NAME)

re:	fclean all