/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 17:59:29 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/12 16:21:44 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int ac, char **av)
{
	int		i;
	int		n;
	char	*holder;

	i = 1;
	while (i < ac - 1)
	{
		n = i + 1;
		while (n < ac)
		{
			if (ft_strcmp(av[i], av[n]) > 0)
			{
				holder = av[i];
				av[i] = av[n];
				av[n] = holder;
			}
			n++;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	int f;

	f = 1;
	ft_sort(ac, av);
	while (f < ac)
	{
		ft_putstr(av[f]);
		ft_putchar('\n');
		f++;
	}
	return (0);
}
