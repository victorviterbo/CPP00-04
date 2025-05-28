# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vviterbo <vviterbo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/05 15:40:14 by vviterbo          #+#    #+#              #
#    Updated: 2025/05/25 15:21:56 by vviterbo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Horde
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++

INCLUDE = -I./include/

SRCS_MAIN_F = Zombie.cpp main.cpp zombieHorde.cpp

SRCS = $(addprefix srcs/, $(SRCS_MAIN_F))


OBJS = $(patsubst srcs/%.cpp,objs/%.o,$(SRCS))

OBJS_DIRS = $(sort $(dir $(OBJS)))

all: folders $(NAME)

clean:
	@rm -rf objs/

fclean: clean
	@rm -f $(NAME)

re: fclean all

folders:
	@mkdir -p $(OBJS_DIRS)

objs/%.o: srcs/%.cpp
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) compiled successfully"

.PHONY: all clean fclean re folders