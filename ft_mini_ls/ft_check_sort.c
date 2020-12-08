/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 11:33:55 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/06 15:01:51 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		ft_check_sort(t_info *p, t_info *q)
{
	if (p->time.tv_sec > q->time.tv_sec)
		return (1);
	if (p->time.tv_sec < q->time.tv_sec)
		return (-1);
	if (p->time.tv_nsec > q->time.tv_nsec)
		return (1);
	if (p->time.tv_nsec < q->time.tv_nsec)
		return (-1);
	return (ft_strcmp(p->name, q->name));
}
