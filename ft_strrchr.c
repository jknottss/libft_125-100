/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 20:06:35 by                   #+#    #+#             */
/*   Updated: 2021/10/09 15:35:32 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				len;
	char			*str;
	unsigned char	ch;

	str = (char *) s;
	len = (int)ft_strlen(s);
	ch = (unsigned char) c;
	while (len >= 0)
	{
		if (str[len] == ch)
			return (&str[len]);
		len--;
	}
	return (NULL);
}
