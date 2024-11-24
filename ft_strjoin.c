/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:14:21 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/21 22:53:50 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	siz;
	char	*c;

	if (!s1 || !s2)
		return (NULL);
	else
	{
		siz = ft_strlen((char *) s1) + ft_strlen((char *) s2) + 1;
		c = (char *) malloc(siz);
		if (!c)
			return (NULL);
		ft_strlcpy(c, s1, ft_strlen((char *) s1) + 1);
		ft_strlcat(c, s2, siz);
	}
	return (c);
}
