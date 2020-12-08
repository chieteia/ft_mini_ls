/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mini_ls.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 20:32:40 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/08 17:36:24 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

int		main(void)
{
	DIR				*dir;
	struct dirent	*dp;
	char			*s;
	char			*path;
	t_info			*p;

	p = NULL;
	if (!(dir = ft_open_dir()))
		return (1);
	while ((dp = readdir(dir)) != NULL)
	{
		s = dp->d_name;
		if (dp->d_name[0] == '.')
			continue ;
		path = ft_get_path(s);
		p = make_list(p, path, s);
		free(path);
	}
	if (ft_close_dir(dir))
		return (1);
	ft_sort(p);
	output(p);
	all_free(p);
	return (0);
}
