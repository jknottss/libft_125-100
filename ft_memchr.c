/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:47:51 by                   #+#    #+#             */
/*   Updated: 2021/10/09 14:13:16 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			count;

	count = 0;
	str = (unsigned char *) s;
	ch = (unsigned char) c;
	while (count < n)
	{
		if (str[count] == ch)
			return (&str[count]);
		count++;
	}
	return (NULL);
}
