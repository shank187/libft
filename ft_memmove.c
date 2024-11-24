/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:30:24 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/22 14:53:46 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sc;
	size_t			i;

	dest = (unsigned char *) dst;
	i = 0;
	sc = (unsigned char *) src;
	if (!src && !dst)
		return (NULL);
	if ((dest < sc) || (dest >= len + sc))
		return (ft_memcpy(dst, src, len));
	else
	{
		while (len > 0)
		{
			len--;
			dest[len] = sc[len];
		}
	}
	return (dst);
}
