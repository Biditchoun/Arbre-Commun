/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:05:36 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/14 19:20:06 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] || s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}

void	swap(char **s1, char **s2)
{
	char	*buff;

	buff = *s1;
	*s1 = *s2;
	*s2 = buff;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
			if (str_cmp(av[i], av[j]) > 0)
				swap(&av[i], &av[j]);
	}
	i = 0;
	while (++i < ac)
	{
		j = -1;
		while (av[i][++j])
			ft_putchar(av[i][j]);
		ft_putchar('\n');
	}
}
