# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larlyne <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/07 13:38:08 by larlyne           #+#    #+#              #
#    Updated: 2019/06/15 10:38:00 by larlyne          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
CFLAGS=-Wall -Wextra -Werror
SRCS=ft_memset.c \
	 ft_bzero.c \
	 ft_memcpy.c \
	 ft_memccpy.c \
	 ft_memmove.c \
	 ft_memchr.c \
	 ft_memcmp.c \
	 ft_strlen.c \
	 ft_strdup.c \
	 ft_strcpy.c \
	 ft_strncpy.c \
	 ft_strcat.c \
	 ft_strncat.c \
	 ft_strlcat.c \
	 ft_strchr.c \
	 ft_strrchr.c \
	 ft_strstr.c \
	 ft_strnstr.c \
	 ft_strcmp.c \
	 ft_strncmp.c \
	 ft_atoi.c \
	 ft_isalpha.c \
	 ft_isdigit.c \
	 ft_isalnum.c \
	 ft_isascii.c \
	 ft_isprint.c \
	 ft_toupper.c \
	 ft_tolower.c \
	 ft_memalloc.c \
	 ft_memdel.c \
	 ft_strnew.c \
	 ft_strdel.c \
	 ft_strclr.c \
	 ft_striter.c \
	 ft_striteri.c \
	 ft_strmap.c \
	 ft_strmapi.c \
	 ft_strequ.c \
	 ft_strnequ.c \
	 ft_strsub.c \
	 ft_strjoin.c \
	 ft_strtrim.c \
	 ft_strsplit.c \
	 ft_itoa.c \
	 ft_putchar.c \
	 ft_putstr.c \
	 ft_putendl.c \
	 ft_putnbr.c \
	 ft_putchar_fd.c \
	 ft_putstr_fd.c \
	 ft_putendl_fd.c \
	 ft_putnbr_fd.c \
	 ft_lstnew.c \
	 ft_lstdelone.c \
	 ft_lstdel.c \
	 ft_lstadd.c \
	 ft_lstiter.c \
	 ft_lstmap.c \
	 ft_setcolors.c \
	 ft_setcolors_fd.c \
	 ft_setforeground.c \
	 ft_setforeground_fd.c \
	 ft_setbackground.c \
	 ft_setbackground_fd.c \
	 ft_setdefault_cols.c \
	 ft_pos_power.c \
	 ft_realloc.c \
	 ft_putstrn.c \
	 ft_putstrn_fd.c \
	 ft_uitoa_base.c \
	 ft_llitoa.c \
	 ft_putcharn_fd.c \
	 ft_isint.c \
\
	 ft_llist_create.c \
	 ft_llist_elem_new.c \
	 ft_llist_add.c \
	 ft_llist_get.c \
	 ft_llist_remove.c \
	 ft_llist_clear.c \
	 ft_llist_destroy.c \
\
	 ft_lstr_new_empty.c \
	 ft_lstr_new.c \
	 ft_lstr_new_raw.c \
	 ft_lstr_new_copy.c \
	 ft_lstr_insert_c.c \
	 ft_lstr_insert_s.c \
	 ft_lstr_insert_sn.c \
	 ft_lstr_place_c.c \
	 ft_lstr_place_s.c \
	 ft_lstr_place_sn.c \
	 ft_lstr_put_fd.c \
	 ft_lstr_put.c \
	 ft_lstr_destroy.c \
	 ft_lstr_resize.c \
	 ft_lstr_minimize.c

OBJS=$(SRCS:.c=.o)

all: $(NAME)

$(NAME):
	@gcc -I . -c $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

makeitclear: all clean
