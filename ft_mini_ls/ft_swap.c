/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:46:10 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/06 15:01:29 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	swap(t_info *p, t_info *q)
{
	const char			*name_tmp;
	struct timespec		time_tmp;

	name_tmp = p->name;
	p->name = q->name;
	q->name = name_tmp;
	time_tmp = p->time;
	p->time = q->time;
	q->time = time_tmp;
}
