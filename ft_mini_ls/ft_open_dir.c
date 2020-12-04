/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_open_dir.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 19:33:59 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 19:46:58 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

DIR		*open_dir(void)
{
	DIR *dir;

	errno = 0;
	dir = opendir(".");
	if (dir == NULL)
	{
		perror(NULL);
		return (NULL);
	}
	return (dir);
}