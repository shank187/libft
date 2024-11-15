/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:30:24 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/13 20:27:39 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len){
    unsigned char *dest;
    unsigned char *sc;
    
    dest = (unsigned char *) dst;
    sc = (unsigned char *) src;
    if ( (dest < sc) || (dest >= len + sc))
        return (ft_memcpy(dst, src, len));
    else
        while(len > 0){
            len--;        
            dest[len]= sc[len];
        }
    return (dst);
}

int main(void){
    char s[30] = "hello";
    char *p;
    p = (char *) ft_memmove(s + 1, s, 5);
    printf("dst : |%s|\n",p);
    printf("src : |%s|\n",p);
}