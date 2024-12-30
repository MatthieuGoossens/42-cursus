# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/15 19:38:08 by magoosse          #+#    #+#              #
#    Updated: 2024/12/27 16:17:22 by magoosse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c \
       ft_print_digit.c \
       ft_print_txt.c \
       libft/ft_putchar_fd.c \
       libft/ft_putstr_fd.c \
       libft/ft_putnbr_fd.c \
       libft/ft_strlen.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean
	$(MAKE) all

.PHONY: all clean fclean re
