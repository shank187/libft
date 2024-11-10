/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:12 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/10 11:05:05 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize){
	size_t i;
	size_t src_len;

	i = 0;
	src_len = ft_strlen((char *)src);
	if (!dstsize)
		return (src_len);
	while((i < dstsize - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0; 
	i = ft_strlen((char *)src);
	return (src_len);
}

// int main(void){
// 	const char h[] = "hello test";
// 	char n[20] = "est ";
// 	printf("my func: |%lu| |%s|\n", ft_strlcpy(n, h, 0), n);
//     char n2[20] = "est ";
// 	printf("C func: |%lu| |%s|\n", strlcpy(n2, h, 0), n2);
// }