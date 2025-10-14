/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:21:33 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/14 19:03:45 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*rt;
	int		i;

	i = 0;
	while (src[i])
		i++;
	rt = malloc(i + 1);
	if (!rt)
		return (NULL);
	i = -1;
	while (src[++i])
		rt[i] = src[i];
	rt[i] = 0;
	return (rt);
}
