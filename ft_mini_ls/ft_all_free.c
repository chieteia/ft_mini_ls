/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_free.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:06:27 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/06 15:09:32 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	all_free(t_info *p)
{
	t_info *tmp;

	tmp = NULL;
	while (p)
	{
		tmp = p->next;
		free(p);
		p = tmp;
	}
}
