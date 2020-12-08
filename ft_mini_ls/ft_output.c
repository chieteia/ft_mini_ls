/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 18:22:29 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/06 15:09:05 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

void	output(t_info *p)
{
	const char *s;

	while (p != NULL)
	{
		s = p->name;
		write(1, s, ft_strlen(s));
		write(1, "\n", 1);
		p = p->next;
	}
}
