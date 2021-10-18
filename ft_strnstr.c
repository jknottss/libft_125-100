/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 22:23:02 by                   #+#    #+#             */
/*   Updated: 2021/10/09 17:07:56 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	i = 0;
	j = 0;
	nlen = ft_strlen(needle);
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (haystack[i])
	{
		while (needle[j] && needle[j] == haystack[i + j] && i + j < len)
			j++;
		if (j == nlen)
			return ((char *) &haystack[i]);
		else
			j = 0;
		i++;
	}
	return (NULL);
}
