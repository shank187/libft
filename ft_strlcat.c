/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:51:33 by aelbour           #+#    #+#             */
/*   Updated: 2024/10/25 15:57:18 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(char *s){

	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

size_t ft_strlcat(char *dst, const char *src, size_t dstsize){
    size_t i;
    size_t j;
    i = ft_strlen(dst);
    if (dstsize < i + 1)
        return(ft_strlen((char *)src) + dstsize);
    j = 0;
    while(dstsize - i - 1)
        dst[i++] = src[j++];
    return(i + ft_strlen((char *)src) - j);
}


