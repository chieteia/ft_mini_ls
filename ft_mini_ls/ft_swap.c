/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:46:10 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 21:59:37 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	swap(t_info *p, t_info *q)
{
	t_info *tmp;

	tmp = p->prev;
	p->prev = q;
	q->prev = tmp;
	tmp->next = q;
	tmp = q->next;
	q->next = p;
	p->next = tmp;
	tmp->prev = p;
}