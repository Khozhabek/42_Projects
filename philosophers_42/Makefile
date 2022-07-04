NAME = philo

CC = clang

CFLAGS = -Wall -Wextra -Werror

THREADS = -lpthread

HEADER = philo.h

SRC = philo \
	message \
	tools \
	main \

FIL = $(addsuffix .c, $(addprefix files/, $(SRC)))

OBJ = $(FIL:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(THREADS) -o $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
