/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abechcha <abechcha@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 15:02:50 by abechcha          #+#    #+#             */
/*   Updated: 2023/12/28 11:47:25 by abechcha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/ft_printf.h"
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int			content;
	int 		flag;
	struct s_list	*next;

}					t_list;
t_list 				*ft_last(t_list *head);
t_list     			*ft_rotate(t_list *head);
t_list   			*ft_rrotate(t_list *head);
t_list 				*ft_find_node(t_list *head, int a);
t_list    			*ft_lstswap(t_list *head);
int					ft_lstmaxnode(t_list *head);
int					ft_lstminnode(t_list *head);
int 				ft_lstsize(t_list *stack);
void 				ft_error(void);
t_list				*parsing(int ac, char **av);
void 				ft_rsplit_free(char **s);
int 				ft_check_duplicated(char **s);
int 				ft_check_empty(char *s);
char				**ft_split(char const *s, char c);
int					ft_check_character(char *str);
long				ft_atoi(char *str);
int					ft_is_int(char *str);
char				*ft_strjoin(char *ar, char *str);
int					ft_strlen(char *str);
char				*ft_strdup(char *s1);
t_list 				*ft_creat_list(char **s);
void    			ft_print_list(t_list *head);
t_list				*ft_lstnew(int conent);


#endif
