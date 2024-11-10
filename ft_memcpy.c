/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:21:07 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/09 18:01:35 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void* dst, const void*  src, size_t n){
	size_t i;
	unsigned char *p;
	unsigned char *q;

	p = (unsigned char *) dst;
	q = (unsigned char *) src;
	i = 0;
	while(i < n){
		p[i] = q[i];
		i++;
	}
	return (dst);
}

// int main(void)
// {
//     const char c[] = "hello world";
//     const char c2[] = "hello world";
	
//     printf("my func |%i| \n", ft_memcmp(c, c2, 11));
//     printf("C func  |%i| \n", memcmp(c, c2, 11));
// }