/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:14:28 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 20:29:36 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINI_LS_H
# define FT_MINI_LS_H

#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

typedef struct	s_info
{
	const	char			*name;
	struct	timespec		time;
	struct	s_info			*prev;
	struct	s_info			*next;
}				t_info;

char	*ft_get_path(char *s);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(char const *s1, char const *s2);
t_info	*init_info(const char *path, const char *s, t_info *prev, t_info *next);
t_info	*make_list(t_info *p, const char * path, const char *s);
void	output(t_info *p);
void	all_free(t_info *p);
DIR		*open_dir(void);
void	swap(t_info *p, t_info *q);
void	sec_sort(t_info *p);

#endif
