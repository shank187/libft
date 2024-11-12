/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:09:53 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/12 16:58:57 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len){
	size_t s_len;
	char *c;
	size_t size;
	if (!s)
		return (NULL);
	s_len = ft_strlen((char *) s);
	if (start > s_len)
		return (NULL);
	s_len = ft_strlen((char *) &s[start]);
	size = len + 1;
	if (s_len < len)
		size = s_len + 1;
	c = (char *) malloc(size);
	// printf("the size secured in | FT_SUBSTR | is %lu\n", size);
	if (!c)
		return (NULL);
	ft_strlcpy(c, &s[start], size);
	return (c);
}

// int main(void){
// 	printf("|%s|\n",ft_substr("hello",0,20));
// }
