# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gloms <rbrendle@student.42mulhouse.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 17:42:58 by gloms             #+#    #+#              #
#    Updated: 2023/03/03 18:58:12 by gloms            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		+= ft_printf.c
SRCS		+= ft_putchar_pf.c
SRCS		+= ft_printf_str.c
SRCS		+= ft_printf_X.c
SRCS		+= ft_printf_xmin.c
SRCS		+= ft_printf_diu.c
SRCS		+= PPPPP.c

#	=== FLAGS ===
CFLAGS		+= -Wall
CFLAGS		+= -Wextra
CFLAGS		+= -Werror
CFLAGS		+= -g
CFLAGS		+= -c

#	=== KEYS WORDS ===
NAME		= libftprintf.a

OBJS		= $(SRCS:.c=.o)

#	=== COMMANDES ===

all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rcs $@ $^

clean:
				@rm -f $(OBJS) $(OBJS_BONUS)

fclean:			clean
				@rm -f $(NAME)

re:				fclean all