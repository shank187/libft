/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:37:32 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/21 16:57:50 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen((char *) s);
	while (i > 0)
	{
		if (s[i] == (char ) c)
			return ((char *) &s[i]);
		i--;
	}
	if (s[0] == (char) c)
		return ((char *) s);
	return (NULL);
}
