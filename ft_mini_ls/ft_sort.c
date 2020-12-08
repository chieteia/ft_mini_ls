/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 14:05:42 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/06 15:13:03 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	ft_sort(t_info *p)
{
	int flag;

	flag = 1;
	while (flag)
	{
		flag = 0;
		while (p->next != NULL)
		{
			if (ft_check_sort(p, p->next) > 0)
			{
				swap(p, p->next);
				flag = 1;
			}
			p = p->next;
		}
		while (p->prev != NULL)
		{
			if (ft_check_sort(p->prev, p) > 0)
			{
				swap(p, p->prev);
				flag = 1;
			}
			p = p->prev;
		}
	}
}
