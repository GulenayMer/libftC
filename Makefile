# -*- Makefile -*-

#target: dependencies
#	action

CC = gcc 
CFLAGS = -Werror -Wall -Wextra
NAME = libft.a
HEAD = libft.h
OBJS = ft_isalpha \ 
       ft_isdigit \ 
       ft_isalnum \
       ft_isascii \ 
	   ft_isprint \ 
	   ft_strlen \
	   ft_memset \ 
	   ft_bzero \ 
	   ft_memcpy \
	   ft_toupper \ 
	   ft_tolower \ 
	   ft_strchr \
	   ft_strrchr \
	   ft_strncmp \ 
	   ft_memchr \
	   ft_memcmp \ 
	   ft_memmove \
	   ft_strlcpy \ 
	   ft_strlcat \ 
	   ft_strnstr \
	   ft_atoi \ 
	   ft_calloc \ 
	   ft_strdup

all : $(NAME)

$(NAME) : $(OBJS)
ar rc $(NAME) $(OBJS)

%.o: %c $(HEAD)
$(CC) $(CFLAGS) -o $@ -c $<

clean:
echo "Remove .o ..."
rm -f $(OBJS)

fclean: clean
echo "Remove lib ..."
rm -f $(NAME)

re: fclean all
