/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 12:27:35 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/20 20:53:17 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_valid(const char c, const char *s)
{
	size_t	i;
	i = 0;
	while(s[i])
	{
		if (c == s[i])
			return (0);
		i++;
	}
	return (1);
}

size_t	get_trimed_len(char const *s1, char const *set, size_t *start)
{
	size_t	len;
	size_t	i;

	len = ft_strlen((char *)s1);
	i = len - 1;
	while	(i > 0 && !is_valid(s1[i] ,set))
	{
		len--;
		i--;
	}
	if (!i)
		return (0);
	i = 0;
	while(s1[i] && !is_valid(s1[i] ,set)){
		i++;
		len--;
	}
	*(start) = i;
	return(len);
}


char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	t_len;
	size_t	start;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen((char *)s1);
	if(!len)
		return(ft_strdup(""));
	t_len = get_trimed_len(s1, set, &start);
	if(!ft_strlen((char *) set) || len == t_len)
		return (ft_strdup(s1));
	else
		return(ft_substr(s1, start, t_len));
}

// int main(void){
// 	char *s = ft_strtrim("", "");
// 	printf("the trimed str |%s|",s);
// 	free(s);
// }