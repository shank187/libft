/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:55:34 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/08 17:43:08 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
	size_t i;	
	size_t h;
	size_t n;

	h = ft_strlen((char *) haystack);
	n = ft_strlen((char *) needle);
	if (h == 0)
		return ((char *) haystack);
	i = 0;
	while(i < len && haystack[i] && h  >= n + i && len >= n + i){ 
		if (!ft_strncmp(haystack + i, needle, len))
			return ((char *) &haystack[i]);
		i++;
	}
	return (0);
}

// int main(void){
// 	const char h[] = "hello test";
// 	const char n[] = "est";
// 	printf("my func: |%p|\n", ft_strnstr(h, n, 10));
// 	printf("C func: |%p|\n", strnstr(h, n, 10)); 
// 	}
