/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close_dir.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 17:29:27 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/08 17:38:07 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		ft_close_dir(DIR *dir)
{
	int res;

	errno = 0;
	res = closedir(dir);
	if (res < 0)
		perror(NULL);
	return (res);
}
