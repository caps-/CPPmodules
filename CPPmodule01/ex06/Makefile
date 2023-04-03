# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pwhittin <pwhittin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 16:15:59 by pwhittin          #+#    #+#              #
#    Updated: 2023/04/03 16:43:30 by pwhittin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#name
NAME	 = harlFilter

#directories
SRC_DIR	= src
INC_DIR	= inc

#compiler stuff
CC		= c++
CFLAGS	= -Wall -Werror -Wextra -std=c++98

#source files
SRC		= main.cpp \
		  Harl.cpp

SRCS	= $(addprefix $(SRC_DIR)/,$(SRC))

#header
INC		= $(INC_DIR)

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
	@$(CC) $(CFLAGS) -I $(INC) $(SRCS) -o $(NAME)
	@echo "$(GRN_B)\n./$(NAME) is good to go!\n$(RESET)"
	@echo "$(GRY)-----------------------------------------------------$(RESET)"

clean:
	@clear
	@rm $(NAME)
	@echo "$(YEL)-----------------------------------------------------$(RESET)"
	@echo "$(GRN)All clean!$(RESET)"
	@echo "$(YEL)-----------------------------------------------------$(RESET)"

fclean:
	@clear
	@rm $(NAME)
	@rm *.replace
	@echo "$(YEL)-----------------------------------------------------$(RESET)"
	@echo "$(GRN)All clean!$(RESET)"
	@echo "$(YEL)-----------------------------------------------------$(RESET)"

re:
	fclean all

.PHONY: all, clean, fclean, re
