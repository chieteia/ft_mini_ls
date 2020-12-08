/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 11:46:20 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/06 15:12:22 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		ft_strcmp(const char *p, const char *q)
{
	int i;

	i = 0;
	while (*p && *q)
	{
		if (*p != *q)
			return (*p - *q);
	}
	if (!(*p) && !(*q))
		return (0);
	else
		return (*p - *q);
}
