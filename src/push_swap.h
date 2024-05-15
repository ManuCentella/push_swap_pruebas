#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>



typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

void	get_numbers(char *av, t_stack **stack_a);
int ft_strlen(char *str);
int ft_isdigit(char c);
int num_valid(char *str);
void ft_putstr(char *str);
void process_arg(char *arg, t_stack **stack_a);
char	**ft_split(char const *s, char c);
long int	ft_atoi(const char *str);
t_stack	*stack_new(int value);
void	stack_add(t_stack **stack, t_stack *new);
t_stack	*get_last(t_stack *stack);
t_stack	*before_bottom(t_stack *stack);
int	get_stack_size(t_stack	*stack);
void	push_swap(t_stack **stack_a, t_stack **stack_b, int stack_size);
void	get_index(t_stack *stack_a, int stack_size);
int	is_sorted(t_stack *stack);
void	do_sa(t_stack **stack_a);
void	do_sb(t_stack **stack_b);
void	do_ss(t_stack **stack_a, t_stack **stack_b);
void	sort_three(t_stack **stack);
void	do_ra(t_stack **stack_a);
void	do_rb(t_stack **stack_b);
void	do_rr(t_stack **stack_a, t_stack **stack_b);
void	rev_rotate(t_stack **stack);
void	do_rra(t_stack **stack_a);
void	do_rrb(t_stack **stack_b);
void	do_rrr(t_stack **stack_a, t_stack **stack_b);
void	cost(t_stack **stack_a, t_stack **stack_b);
void	cheapest_move(t_stack **stack_a, t_stack **stack_b);
void	reverse_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void	rotate_both(t_stack **a, t_stack **b, int *cost_a, int *cost_b);
void	rotate_a(t_stack **a, int *cost);
void	rotate_b(t_stack **b, int *cost);
void	do_move(t_stack **a, t_stack **b, int cost_a, int cost_b);
void	push(t_stack **src, t_stack **dst);
void	do_pa(t_stack **stack_a, t_stack **stack_b);
void	do_pb(t_stack **stack_a, t_stack **stack_b);
void	push_init(t_stack **stack_a, t_stack **stack_b);
void	sort_stack(t_stack **stack_a);
void	sort(t_stack **stack_a, t_stack **stack_b);
void	get_position(t_stack **stack);
int	get_target(t_stack **stack_a, int index_b, int target_i, int target);
int	position_lowest_index(t_stack **stack);
void	get_target_position(t_stack **stack_a, t_stack **stack_b);
void	free_stack(t_stack **stack);
void	error_and_exit(t_stack **stack_a, t_stack **stack_b);
int is_duplicate(t_stack *column);








#endif /* PUSH_SWAP_H */

