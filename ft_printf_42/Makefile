NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_util_str.c \
			ft_util_num.c \
			ft_util_characters.c

HEADER	=	ft_printf.h

OBJ		=	$(SRCS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

.PHONY	:	all clean fclean re 

all		:	$(NAME)

$(NAME)	:	$(OBJ)
			ar r $(NAME) $?

%.o		: 	%.c $(HEADER)
			$(CC) $(CFLAGS) -c $< -o $@

clean	:
			rm -f $(OBJ)

fclean	:	clean
			rm -rf $(NAME)

re		:	fclean all
