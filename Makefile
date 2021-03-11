# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yulkazan <yulkazan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/15 20:41:23 by yulkazan          #+#    #+#              #
#    Updated: 2021/01/28 02:38:43 by yulkazan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBFT = libft/libft.a

NAME = libftprintf.a

SRCS =	ft_itoa_base.c \
		ft_pf_args.c \
		ft_pf_char.c \
		ft_pf_exfunc.c \
		ft_pf_flag_type.c \
		ft_pf_nums.c \
		ft_pf_percent.c \
		ft_pf_pointer.c \
		ft_pf_prec.c \
		ft_pf_str.c \
		ft_pf_type.c \
		ft_pf_width.c \
		ft_pf_write.c \
		ft_printf.c

OBJS =	$(SRCS:.c=.o)
			
HEADR = ft_printf.h

CC = gcc

RM = rm -f

FLAGS = -Wall -Werror -Wextra

all:	$(NAME)

$(NAME):	$(OBJS) | $(LIBFT)
	ar rcs	$(NAME) $(OBJS)

$(OBJS): $(SRCS) $(HEADR)
	$(CC) $(FLAGS) -c $(SRCS)

$(LIBFT):
	make -C libft
	cp $(LIBFT) $(NAME)

clean:
	$(RM) $(OBJS)
	make -C libft clean 

fclean: clean
	$(RM) $(NAME) $(LIBFT)
	make -C libft clean

re:		fclean all

.PHONY: all, clean, fclean, re