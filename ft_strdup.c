/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:46:10 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/10 15:03:44 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strdup(const char *s1){
	char *c;
	size_t i;
	size_t l;

	l = ft_strlen((char *) s1);
	i = 0;
	c = (char *) malloc(l + 1);
	printf("the size secured in strdup is %lu\n", (l + 1));
	if (!c)
		return (NULL);
	ft_strlcpy(c, s1, l + 1);
	return (c);
}
