# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbordes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 13:08:22 by fbordes           #+#    #+#              #
#    Updated: 2024/01/15 10:01:05 by fbordes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= DiamondTrap

CC			= c++
FLAGS		= -Wall -Wextra -Werror -std=c++98 -Wshadow -Wno-shadow
RM			= rm -rf

OBJDIR = .objFiles

FILES		= main ClapTrap ScavTrap FragTrap DiamondTrap

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER			= ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp
all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) -o $(NAME)
	@printf "$(_SUCCESS) Executable $(NAME) ready.\n"

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)
	@printf "Object files removed.\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "Executable $(NAME) removed.\n"

re: fclean all

