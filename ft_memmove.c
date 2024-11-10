/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:30:24 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/09 17:33:20 by aelbour          ###   ########.fr       */
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
