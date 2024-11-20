/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:58:41 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/15 17:35:30 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n){
    unsigned char* s_1;
    unsigned char* s_2;
	size_t i;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	i = 0;
	while(i < n){
		if(s_1[i] != s_2[i])
			return(s_1[i] - s_2[i]);
		i++;
	}
	return(0);
}

// int main(void)
// {
//     const char c[] = "hello world";
//     const char c2[] = "hello world";
	
//     // printf("my func |%i| \n", ft_memcmp(NULL, c2, 11));
//     // printf("C func  |%i| \n", memcmp(NULL, c2, 11));
// }
