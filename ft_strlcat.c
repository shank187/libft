/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:51:33 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/18 14:56:30 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    size_t i;
    size_t j;
    
    if(!dst && !dstsize)
		return(ft_strlen((char *)src));
    i = ft_strlen(dst);
    if (dstsize < i + 1)
        return(ft_strlen((char *)src) + dstsize);
    j = 0;
    while((dstsize > i + 1) && src[j])
        dst[i++] = src[j++];
    dst[i] = 0;
    return(i + ft_strlen((char *)src) - j);
}

// int main(void){
// 	const char h[] = "hello test";
// 	char n[20] = "est ";
//     char n2[20] = "est ";
// 	printf("my func: |%lu| |%s|\n", ft_strlcat(n, h, 0), n);
// 	printf("C func: |%lu| |%s|\n", strlcat(n2, h, 0), n2); 
// 	}