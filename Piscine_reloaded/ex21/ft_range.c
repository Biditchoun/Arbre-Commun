/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:31:03 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/14 14:36:21 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*rt;

	if (min >= max)
		return (NULL);
	rt = malloc(sizeof(int) * (max - min));
	if (!rt)
		return (NULL);
	i = -1;
	while (min + ++i < max)
		rt[i] = min + i;
	return (rt);
}
