# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adrperez <adrperez@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/19 15:32:54 by adrperez          #+#    #+#              #
#    Updated: 2022/09/27 15:32:10 by adrperez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Exit
NAME		= 	libft.a

#Sources
SRCS		= 	ft_bzero.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_memchr.c \
				ft_strchr.c \
				ft_strlcpy.c \
				ft_strncmp.c \
				ft_tolower.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_memcpy.c \
				ft_memset.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strrchr.c \
				ft_toupper.c \
				ft_memcmp.c \
				ft_strnstr.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_memmove.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

OBJS		= 	$(SRCS:.c=.o)

#Compilation
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

#Erase
RM			= 	rm -rf

#Default target
all:		$(NAME)
			
# Linking: option -r to ensure that if the library (.a) file already exists, 
# it will be replaced. The command option -c should be used so that if the 
# file doesn’t exist, it will be created.
$(NAME):	$(OBJS) 
			ar -rcs $(NAME) $(OBJS)

#Cleaning objects (Eliminacion de objetos)
clean:
			$(RM) $(OBJS)

#Cleaning objects and executable 
fclean:		clean
			$(RM) $(NAME)

#Cleaning all and then compilation
re:			fclean all

#Exectute no matter name is
.PHONY: all clean fclean re
