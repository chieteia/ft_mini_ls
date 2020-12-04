/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_info.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:25:08 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 17:31:23 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

t_info	*init_info(const char *path, const char *s, t_info *prev, t_info *next)
{
	t_info *new;
	struct	stat buf;
	int ret;

	ret = lstat(path, &buf);
	if (ret < 0)
		return (NULL);
	if (!(new  = (t_info *)malloc(sizeof(t_info))))
			return (NULL);
	new->name = s;
	new->time = buf.st_mtimespec;
	new->prev = prev;
	new->next = next;
	return (new);
}