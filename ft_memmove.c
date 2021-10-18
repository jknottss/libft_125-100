/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 20:09:41 by                   #+#    #+#             */
/*   Updated: 2021/10/06 21:47:43 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!dst && !src)
		return (NULL);
	len++;
	if (dst < src)
	{
		d = (unsigned char *) dst;
		s = (unsigned char *) src;
		while (--len > 0)
			*d++ = *s++;
	}
	else
	{
		d = (unsigned char *) dst + len - 1;
		s = (unsigned char *) src + len - 1;
		while (--len > 0)
			*--d = *--s;
	}
	return (dst);
}
