# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbordes <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/27 13:08:22 by fbordes           #+#    #+#              #
#    Updated: 2024/04/22 11:18:31 by fbordes          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= Intern

CC			= c++
FLAGS		= -g -Wall -Wextra -Werror -std=c++98
RM			= rm -rf
SHRUBBERY = $(shell find . -name '*_shrubbery')

OBJDIR = .objFiles

FILES		= main Bureaucrat AForm Intern PresidentialPardonForm ShrubberyCreationForm RobotomyRequestForm

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER			= Bureaucrat.hpp AForm.hpp Intern.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp
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
	@$(RM) $(SHRUBBERY)
	@printf "Executable $(NAME) removed.\n"

re: fclean all

