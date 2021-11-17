CC = gcc
CFLAGS = -Wextra -Werror -Wall
CFLAGS +=
NAME = push_swap

DIR_H = ./includes/
DIR_S = ./srcs/

SRC	=	./function/ft_push.c		\
		./function/ft_rotate.c		\
		./function/ft_rrotate.c		\
		./function/ft_swap.c		\
		./sort/ft_sort_factor.c		\
		./sort/ft_sort_more.c		\
		./sort/ft_sort_utils.c		\
		ft_init.c					\
		ft_lst.c					\
		ft_stack.c					\
		ft_utils_arr.c				\
		ft_utils_split.c			\
		ft_utils.c					\
		main.c						\

SRCS = $(addprefix $(DIR_S),$(SRC))

OBJS = $(SRCS:.c=.o)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -I $(DIR_H) -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) -I $(DIR_H)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean all re







