/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:21:07 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/13 20:29:19 by aelbour          ###   ########.fr       */
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


int main(void){
    char s[30] = "hello";
    char *p;
    p = (char *) ft_memcpy(s + 9, s, 5);
    printf("dst : |%s|\n",p);
    printf("src : |%s|\n",p);
}