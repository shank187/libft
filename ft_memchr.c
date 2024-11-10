/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:25:16 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/09 17:50:18 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n){
    unsigned char *p;
    size_t i;

    p = (unsigned char *)s;
    i = 0;
    while(p[i] && i < n)
        if(p[i++] == (unsigned char) c)
            return ((void *)&s[--i]);
    return (NULL);
}

// int main(void)
// {
//     const char c[] = "hello world";
//     printf("my func |%p| \n", ft_memchr(c, 'w',10));
//     printf("C func  |%p| \n", memchr(c, 'w', 10));
// }
