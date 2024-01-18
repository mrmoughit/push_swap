/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:45:12 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 14:02:21 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	int				flag;
	int				moves;
	struct s_list	*tar;
	struct s_list	*next;

}					t_list;

void				ft_optimized(t_list **stack);
void				ft_lstadd_front(t_list **head, t_list *new);
void				ft_push(t_list **src, t_list **dest, int flag);
void				ft_big_sort(t_list **stack_a, t_list **stack_b);
void				ft_final_sort(t_list **stack_a);
int					ft_is_sorted(t_list **stack_a);
t_list				*ft_creat_list(char **s);
t_list				*ft_lstnew(int conent);
t_list				*ft_last(t_list *head);
t_list				*ft_find_node(t_list *head, int a);
int					ft_find_node_flag(t_list **head);
void				ft_push_flag(t_list **stack_a, t_list **stack_b);
t_list				*ft_find_target(int a, t_list **stack_a);
void				ft_set_target(t_list **stack_a, t_list **stack_b);
void				ft_sort4(t_list **stack_a, t_list **stack_b);
void				ft_subsequence_search(t_list **stack_a, int **ar);
void				ft_sort3(t_list **stack_a);
void				ft_setflag(t_list **stack_b, int **ar, int len);
void				ft_rotate(t_list **head, int flag);
void				ft_rrotate(t_list **head, int flag);
void				ft_lstswap(t_list **head, int flag);
int					ft_lstmaxnode(t_list *head);
int					ft_lstminnode(t_list *head);
int					ft_lstsize(t_list *stack);
void				ft_error(void);
void				parsing(t_list **stack_a, int ac, char **av);
int					ft_check_duplicated(char **s);
int					ft_check_empty(char *s);
char				**ft_split(char const *s, char c);
int					ft_check_character(char *str);
long				ft_atoi(char *str);
int					ft_is_int(char *str);
char				*ft_strjoin(char *ar, char *str);
int					ft_strlen(char *str);
char				*ft_strdup(char *s1);
void				ft_ss(t_list **stack_a, t_list **stack_b);
void				ft_rr(t_list **stack_a, t_list **stack_b);
void				ft_rrr(t_list **stack_a, t_list **stack_b);
void				ft_forward_to_r_rr(t_list **stack_a, t_list **stack_b,
						t_list *best);
void				ft_forward_to_rr(t_list **stack_a, t_list **stack_b,
						t_list *best);
void				ft_forward_to_rrr(t_list **stack_a, t_list **stack_b,
						t_list *best);
int					ft_index(t_list **stack, int a);
void				ft_check_best_move(t_list **stack_b, t_list **stack_a);
void				ft_min_moves(t_list **stack_a, t_list **stack_b);
void				ft_free_linked_list(t_list **stack);
void				ft_free_string(char **s);
#endif
