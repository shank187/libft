/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 15:29:15 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/13 18:20:05 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size){
	void *c;

	c = malloc(count * size);
	if (!c)
		return (NULL);
	ft_bzero(c, size * size);
	return (c);
}

int main(void){
	printf("%p\n",ft_calloc(0,90));
}