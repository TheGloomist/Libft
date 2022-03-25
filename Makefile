# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: izaitcev <izaitcev@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/25 19:10:52 by izaitcev      #+#    #+#                  #
#    Updated: 2022/03/25 19:12:23 by izaitcev      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c      \
        ft_bzero.c      \
        ft_memcpy.c     \
        ft_memmove.c    \
        ft_memchr.c     \
        ft_memcmp.c     \
        ft_strlen.c     \
        ft_isalpha.c    \
        ft_isdigit.c        \
        ft_isalnum.c        \
        ft_isascii.c        \
        ft_isprint.c        \
        ft_toupper.c        \
        ft_tolower.c        \
        ft_strchr.c     \
        ft_strrchr.c        \
        ft_strncmp.c        \
        ft_strlcpy.c        \
        ft_strlcat.c        \
        ft_strnstr.c        \
        ft_atoi.c       \
        ft_calloc.c     \
        ft_strdup.c     \
        ft_substr.c     \
        ft_strjoin.c    \
        ft_strtrim.c        \
        ft_itoa.c       \
        ft_strmapi.c        \
        ft_putchar_fd.c \
        ft_putstr_fd.c  \
        ft_putendl_fd.c \
        ft_putnbr_fd.c \
        ft_striteri.c \
        ft_split.c 
NAME = libft.a
CC = clang
CC_FLAGS = -Wall -Wextra -Werror
OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))
$(OBJS_DIR)%.o : %.c libft.h
    @mkdir -p $(OBJS_DIR)
    @echo "Creating: $<"
    @clang $(CC_FLAGS) -c $< -o $@
$(NAME): $(OBJECTS_PREFIXED)
    @ar r $(NAME) $(OBJECTS_PREFIXED)
    @echo "\nSuccesful Bro!"
all: $(NAME)
clean:
    rm -rf $(OBJS_DIR)
fclean: clean
    rm -f $(NAME)
remove_ds:
    @find . -name ".DS_Store" -delete
    @Echo "--> .DS_Store Removed for you bro"
re: fclean all