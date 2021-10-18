/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 21:43:52 by                   #+#    #+#             */
/*   Updated: 2021/10/04 21:45:05 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *str)
{
	int	count;

	count = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == ' ')
		count++;
	return (count);
}

int	ft_atoi(const char *str)
{
	int		res;
	int		count;
	int		sign;
	char	*s;

	res = 0;
	sign = 1;
	s = (char *) str;
	count = ft_start(s);
	if (s[count] == '-' || s[count] == '+')
	{
		if (s[count] == '-')
			sign = -1;
		count++;
	}
	while (s[count] > 47 && s[count] < 58)
	{
		res = (res * 10) + (s[count] - '0');
		count++;
	}
	return (res * sign);
}
