# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ewurstei <ewurstei@student.42quebec>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/06 16:38:33 by ewurstei          #+#    #+#              #
#    Updated: 2022/02/06 17:06:55 by ewurstei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
FLAGS = -Wall -Werror -Wextra
NAME = rush-02

all: 
	$(CC) $(FLAGS) main.c ft_check_param.c ft_check_dict.c -o $(NAME)

exec:
	rush-02

clean:
	./rm -rf *.o

fclean: 
	./rm -rf $(NAME)

re:	fclean all
