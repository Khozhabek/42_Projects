NAME	=	libftprintf.a

FILES	= 	ft_printf.c			ft_putchar.c		ft_putstr.c\
			ft_putnbr.c			ft_putnbr_base.c

HEADER	=	ft_printf.h
OBJ		=	$(patsubst %.c, %.o, $(FILES))

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I $(HEADER)
AR		=	ar rcs
RM		=	rm -f

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(HEADER)
	ar -rcs $(NAME) $(OBJ)
	ranlib $(NAME)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
