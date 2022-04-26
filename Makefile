# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pweinsto <pweinsto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/13 10:10:25 by pweinsto          #+#    #+#              #
#    Updated: 2021/07/13 15:44:51 by pweinsto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS =	ft_char.c \
		ft_hex.c \
		ft_hexx.c \
		ft_int.c \
		ft_perc.c \
		ft_printf.c \
		ft_ptr.c \
		ft_puthex.c \
		ft_puthexx.c \
		ft_specifier.c \
		ft_str.c \
		ft_unint.c \

LIBFT_PATH	= ./libft

OBJS	=	$(SRCS:.c=.o)

CC		=		gcc

CFLAGS	=		-Wall -Wextra -Werror -c

AR		=		ar rc

RM		=		rm -f

all: 		target_libft $(NAME)

target_libft:		
			make -C libft/

compile:
			$(CC) $(CFLAGS) $(SRCS)

$(NAME):	compile
			$(AR) $(NAME) $(OBJS) $(LIBFT_PATH)/*.o

clean_libft:
			make clean -C libft/

clean:		clean_libft
			$(RM) $(OBJS)

fclean_libft:
			make fclean -C libft/

fclean:		clean fclean_libft
			$(RM) $(NAME)


re:			fclean all