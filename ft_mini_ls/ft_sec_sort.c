/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sec_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:43:38 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 20:44:18 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	sec_sort(t_info *p)
{
	int flag;

	flag = 1;
	while (flag)
	{
		flag = 0;
		while (p->next != NULL)
		{
			if (p->time.tv_sec > p->next->time.tv_sec)
			{
				swap(p, p->next);
				flag = 1;
			}
			p = p->next;
		}
		while (p->prev != NULL)
		{
			if (p->time.tv_sec < p->prev->time.tv_sec)
			{
				swap(p, p->prev);
				flag = 1;
			}
			p = p->prev;
		}
	}
}