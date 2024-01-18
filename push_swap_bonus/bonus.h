/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bonus.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 09:29:04 by abechcha          #+#    #+#             */
/*   Updated: 2024/01/13 14:50:06 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BONUS_H
# define BONUS_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}					t_list;

typedef struct s_store
{
	char			*content;
	struct s_store	*next;
}					t_store;

t_store				*ft_lstnew1(char *content);
t_list				*ft_lstnew(int content);
t_list				*ft_creat_list(char **s);
t_list				*ft_find_node(t_list *head, int a);
t_list				*ft_last(t_list *head);
void				ft_print_error(t_list **stack_a, t_list **stack_b,
						t_store **store);
int					ft_is_valid1(char *content);
void				ft_free_linked_list(t_list **stack);
void				ft_free_linked_list1(t_store **stack);
void				parsing(t_list **stack_a, int ac, char **av);
long				ft_atoi(char *str);
int					ft_check_empty(char *s);
char				*ft_strjoin(char *ar, char *str);
int					ft_check_character(char *str);
char				**ft_split(char const *s, char c);
int					ft_is_int(char *str);
int					ft_check_duplicated(char **s);
char				*ft_strdup(char *s1);
int					ft_strlen(char *str);
void				ft_free_linked_list(t_list **stack);
void				ft_free_string(char **s);
int					ft_strncmp(char *s1, char *s2, int n);
void				ft_rr(t_list **stack_a, t_list **stack_b);
void				ft_rotate(t_list **head);
void				ft_rrotate(t_list **head);
void				ft_rrr(t_list **stack_a, t_list **stack_b);
void				ft_ss(t_list **stack_a, t_list **stack_b);
void				ft_lstswap(t_list **head);
int					ft_lstsize(t_list *stack);
char				*ft_strjoin_free(char *s1, char *s2);
char				*get_next_line(int fd);
int					ft_find_nl(const char *s, int c);
void				ft_printf_result(t_list **stack_a, t_list **stack_b,
						t_store **store);
void				ft_error(void);
int					ft_is_sorted(t_list **stack);
void				ft_add_back(t_store **head, char *content);
void				ft_push(t_list **src, t_list **dest);
void				ft_lstadd_front(t_list **head, t_list *new);
char				*ft_remove_nl(char *s);
void				ft_add_back(t_store **head, char *content);
int					ft_is_valid(char *content);
void				ft_applay(t_store **head, t_list **stack_a,
						t_list **stack_b);
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1337
# endif
#endif
