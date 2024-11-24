/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:21:07 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/24 12:14:29 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*sc;

	if (!src && !dst)
		return (NULL);
	if (dst == src)
		return (dst);
	i = 0;
	dest = (unsigned char *) dst;
	sc = (unsigned char *) src;
	while (i < n)
	{
		dest[i] = sc[i];
		i++;
	}
	return (dst);
}
