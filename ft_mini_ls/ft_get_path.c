/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_path.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntoshihi <ntoshihi@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 13:46:38 by ntoshihi          #+#    #+#             */
/*   Updated: 2020/12/04 13:56:32 by ntoshihi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mini_ls.h"

char	*ft_get_path(char *s)
{
	char	*prefix;
	char	*path;

	prefix = "./";
	path = ft_strjoin(prefix, s);
	return (path);
}