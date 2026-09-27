#ifndef FT_PUSH_SWAP_H
# define FT_PUSH_SWAP_H

# include "libft.h"

typedef struct s_num
{
	int	value;
	int	index;
	struct s_num *next;
	struct s_num *prev;
} t_num;

typedef struct s_stack
{
	t_num	*top;
	t_num	*bottom;
	int		size;
} t_stack;

void swap_stack(t_stack *stack);
void sa(t_stack *stack_a);
void sb(t_stack *stack_b);
void ss(t_stack *stack_a, t_stack *stack_b);
void rotate_stack(t_stack *stack);
void ra(t_stack *stack_a);
void rb(t_stack *stack_b);
void rr(t_stack *stack_a, t_stack *stack_b);
void reverse_rotate_stack(t_stack *stack);
void rra(t_stack *stack_a);
void rrb(t_stack *stack_b);
void rrr(t_stack *stack_a, t_stack *stack_b);
void push_stack_top(t_stack *src, t_stack *dest);
void pa(t_stack *stack_b, t_stack *stack_a);
void pb(t_stack *stack_a, t_stack *stack_b);
void sort_three(t_stack *stack_a);
void sort_four(t_stack *stack_a, t_stack *stack_b);
void simple_alg(t_stack *stack_a, t_stack *stack_b);
double compute_disorder (t_stack *stack_a);
void sort_five(t_stack *stack_a, t_stack *stack_b);
int find_minimum(t_stack *stack);
void push_minimum(t_stack *Stack_a, t_stack *Stack_b, int min_pos);
void selection_sort(t_stack *Stack_a, t_stack *Stack_b);
int	count_operations(int op_index);
void print_op_counting(void);

/* medium algorithm */
void pre_sort(t_stack *stack_a);
void ft_assign_index(int *str, t_stack *stack_a);
int ft_sqrt(int nb);
void check_chunk(t_stack *stack_a, t_stack *stack_b, int chunk_start, int chunk_end)
void medium_alg(t_stack *stack_a, t_stack *stack_b);
void find_max(t_stack *stack);
void bring_to_top_b(t_stack *stack_b, int position);

#endif
