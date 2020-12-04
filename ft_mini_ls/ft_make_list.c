/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_list.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 15:04:57 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 17:02:58 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

t_info	*make_list(t_info *p, const char * path, const char *s)
{
	t_info *top;

	if (!p)
	{
		p = init_info(path, s, NULL, NULL);
		return (p);
	}
	else
	{
		top = p;
		while(p->next)
			p = p->next;
		p->next = init_info(path, s, p, NULL);
		return (top);
	}
}