NAME = libft.a


RM = rm -f


CC = gcc


CFLAGS = -Wall -Wextra -Werror

SRCs = ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isdigit.c \
	   ft_isascii.c \
	   ft_isprint.c \

OBJs = $(SRCs:.c=.o)

all : $(NAME)

$(NAME) : $(OBJs)
	ar rcs $(NAME) $(OBJs)

$.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJs)

fclean :
	$(RM) $(NAME)

re : fclean all

