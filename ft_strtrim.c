/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:27:35 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/10 21:46:35 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_valid(const char c, const char *s){
	size_t i;
	i = 0;
	while(s[i])
	{
		if (c ==  s[i])
			return (0);
		i++;
	}
	return (1);
}

size_t get_trimed_len(char const *s1, char const *set, const char *start)
{
	size_t len;
	size_t i;
	
	len = ft_strlen(s1);
	i = len - 1;
	while(i > 0 && !is_valid(s1[i] ,set)){
		len--;
		i--;
	}
	if (!i)
		return(0)
	i = 0;
	while(s1[i] && !is_valid(s1[i] ,set)){
		i++;
		len--;
	}
	start = &s1[i]
	return(len)
}

void ft_trim(char const *s1, char const *set, char *dst){
}

char *ft_strtrim(char const *s1, char const *set){
	char *s;
	size_t len;
	size_t start;

	s = NULL;
	len = ft_strlen((char *) s1);
	if (!s1)
		return (NULL);
	if(!set || !ft_strlen((char *) set))
		return (ft_strdup(s1));
	else if (get_trimed_len(s1, set) == len)
		return (ft_strdup(s1));
	else if(! get_trimed_len(s1, set))
		return(ft_strdup(""));
	else{
		s = ft_substr();

	}
	printf("the size secured is %lu\n",get_trimed_len(s1, set) + 1);
	return (s);
}

// int main(void){
// 	printf("the trimed str |%s|",ft_strtrim("hello world", "ppppkkkksa a7263"));
// }