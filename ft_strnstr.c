/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 15:55:34 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/20 16:16:39 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len){
	size_t i;	
	size_t h;
	size_t n;
	if(!haystack && !len && needle)
		return(NULL);
	h = ft_strlen((char *) haystack);
	n = ft_strlen((char *) needle);
	if (n == 0)
		return ((char *) haystack);
	i = 0;
	while(i < len && haystack[i] && h  >= n + i && len >= n + i){ 
		if (!ft_strncmp(haystack + i, needle, n))
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}

