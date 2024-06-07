/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liyu-her <liyu-her@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 19:03:52 by liyu-her          #+#    #+#             */
/*   Updated: 2024/06/03 21:30:15 by liyu-her         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
#include "../libft/libft.h"

typedef struct s_list
{
	char			*str;
	struct s_list	*next;
}					t_list;

char				*get_next_line(int fd);
void				create_list(int fd, t_list **bufstr);
int					get_nwl(t_list **bufstr);
char				*get_line(t_list *bufstr);
char				*fill_letter(t_list *bufstr, int len);
t_list				*ft_lastlst(t_list *lst);
int					ft_lstsize(t_list *lst);
void				make_n(t_list **bufstr, char *str);
void				clean_list(t_list **bufstr);
void				ft_addlst_back(t_list **lst, t_list *n);

#endif