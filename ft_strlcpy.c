/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:31:12 by aelbour           #+#    #+#             */
/*   Updated: 2024/10/25 12:50:11 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(char *s){

	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize){
	size_t i;

	i = 0;
	while(i < dstsize - 1)
		dst[i] = src[i++];
	i = ft_strlen(src);
	return (i);
}
