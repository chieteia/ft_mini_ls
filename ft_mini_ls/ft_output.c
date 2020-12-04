/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:22:29 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 18:37:25 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	output(t_info *p)
{
	int i;
	const char *s;

	while(p)
	{
		i = 0;
		s = p->name;
		while(s[i])
		{
			write(1, &s[i], 1);
			i++;
		}
		write(1, "\n", 1);
		p = p->next;
	}
}