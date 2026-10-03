NAME	= push_swap

CC		= gcc
RM		= rm -rf
CFLAGS	= -Wall -Wextra -Werror
DEPFLAGS	= -MMD -MP

SRC_DIR	= src
OBJ_DIR	= obj

SRC		= adaptive_alg.c arg_checker.c bench_output.c clean_split_memory.c \
clean_stack_memory.c complex_alg.c create_empty_stack.c create_new_number.c \
duplicity_checker.c \
fill_stack_a.c \
find_strategy.c \
ft_push_swap.c \
ft_push_swap_disorder.c \
ft_push_swap_operations.c \
ft_push_swap_sort.c \
ft_put_percent_fd.c \
ft_swap.c \
join_args.c \
medium_alg.c \
medium_alg_utils.c \
print_stack.c \
push_new_number.c \
run_push_swap.c \
selection_sort.c \
simple_alg.c \
simple_alg_utils1.c \
simple_alg_utils2.c \
strategy_selector.c \
validate_all_flags.c \
validate_args.c \
validate_flag.c


OBJS	= $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
DEPS	= $(OBJS:.o=.d)

LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

INCLUDES	= -I. -I$(LIBFT_DIR)

all:	$(NAME)

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(DEPFLAGS) $(INCLUDES) -c $< -o $@

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

clean:
	${RM} $(OBJ_DIR)
	$(MAKE) -C $(LIBFT_DIR) clean

fclean: clean
	${RM} $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

re: fclean all

-include $(DEPS)

.PHONY: all clean fclean re
