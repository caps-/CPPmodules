# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 16:15:35 by pwhittin          #+#    #+#              #
#    Updated: 2023/03/20 16:15:46 by pwhittin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#name
NAME	 = megaphone

#compiler stuff
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

#source files
SRC		= megaphone.cpp

#colours!
YEL		= \033[0;33m
GRN		= \033[0;32m
RED		= \033[0;31m
GRY		= \033[1;30m
GRN_B	= \033[32;7m
RESET	= \033[0m

all:
	@clear
	@echo "$(GRY)-----------------------------------------------------$(RESET)"
	@echo "$(YEL)Compiling...$(RESET)"
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "$(GRN_B)\n./$(NAME) is good to go!\n$(RESET)"
	@echo "$(GRY)-----------------------------------------------------$(RESET)"

clean:
	@clear
	@rm $(NAME)
	@echo "$(YEL)-----------------------------------------------------$(RESET)"
	@echo "$(GRN)All clean!$(RESET)"
	@echo "$(YEL)-----------------------------------------------------$(RESET)"

re:
	clean all

.PHONY: all, clean, re
