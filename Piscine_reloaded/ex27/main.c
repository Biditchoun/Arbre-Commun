/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawijnbe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:19:53 by sawijnbe          #+#    #+#             */
/*   Updated: 2025/10/14 21:21:04 by sawijnbe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	str_len(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	write_and_return(char *str, int fd, int i)
{
	write(fd, str, str_len(str));
	return (i);
}

int	arg_check(int ac, char **av)
{
	int	rt;

	rt = 0;
	if (ac < 2)
		return (write_and_return("File name missing.\n", 2, 0));
	else if (ac > 2)
		return (write_and_return("Too many arguments.\n", 2, 0));
	rt = open(av[1], O_RDONLY);
	if (rt < 1)
		return (write_and_return("Cannot read file.\n", 2, 0));
	return (rt);
}

int	main(int ac, char **av)
{
	char	buff[1001];
	int		read_rt;
	int		fd;

	fd = arg_check(ac, av);
	if (!fd)
		return (0);
	read_rt = 1000;
	while (read_rt == 1000)
	{
		read_rt = read(fd, buff, 1000);
		if (read_rt < 0)
			return (write_and_return("Cannot read file.\n", 2, 0));
		buff[read_rt] = 0;
		write_and_return(buff, 1, 0);
	}
	close(fd);
	return (0);
}
