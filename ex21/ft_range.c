/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuxu <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 18:16:12 by yuxu              #+#    #+#             */
/*   Updated: 2017/11/13 19:24:51 by yuxu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_range(int min, int max)
{
	int *str;
	int i;
	int n;

	i = max - min;
	n = 0;
	if (i <= 0)
		return (0);
	str = (int*)malloc(sizeof(*str) * (i + 1));
	if (str == NULL)
		return (NULL);
	while (min < max)
	{
		str[n] = min;
		min++;
		n++;
	}
	str[n] = '\0';
	return (str);
}
