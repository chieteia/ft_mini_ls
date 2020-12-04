# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/04 21:00:58 by ntoshihi          #+#    #+#              #
#    Updated: 2020/12/04 21:43:50 by ntoshihi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=	ft_all_free.c \
					ft_calloc.c \
					ft_get_path.c \
					ft_init_info.c \
					ft_make_list.c \
					ft_mini_ls.c \
					ft_open_dir.c \
					ft_strjoin.c \
					ft_strlen.c
					//ft_swap.c
					//*ft_sec_sort.c \


CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= ft_mini_ls

all:			$(NAME)

$(NAME):		$(SRCS)
				$(CC) $(CFLAGS) -o $(NAME) $(SRCS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re