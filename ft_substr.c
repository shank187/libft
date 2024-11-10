/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:09:53 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/10 11:51:08 by aelbour          ###   ########.fr       */
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
	size = len;
	if (s_len < len)
		size = s_len;
	c = (char *) malloc(size + 1);
	printf("the size secured is %lu\n",size + 1);
	if (!c)
		return (NULL);
	ft_strlcpy(c, &s[start], size + 1);
	return (c);
}

int main(void){
	printf("|%s|\n",ft_substr("hello",0,20));
}
