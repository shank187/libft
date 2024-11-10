/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:29:15 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/09 15:41:48 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size){
	unsigned char *c;
	size_t i;

	i = 0;
	c = (unsigned char *) malloc(count * size);
	if (!c)
		return (NULL);
	while(i < count * size)
		c[i++] = 0;
	return ((void *) c);
}