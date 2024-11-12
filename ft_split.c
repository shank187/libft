/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:46:26 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/12 17:02:08 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_seps(size_t *i, char const *s, char c){
	while(s[*i] && s[*i] ==  c)
		(*i)++;
}

size_t	count_cols(char const *s, char c){
	size_t t;
	size_t i;

	t = 0;
	i = 0;
	if(!s[i])
		return(0);
	skip_seps(&i, s, c);
	while(s[i])
	{
		if(s[i] == c){
			skip_seps(&i, s, c);
			t++;
		}
		else
			i++;
	}
	if(s[i - 1 ] != c)
		t++;
	return(t);
}

void	ft_store(char **arr, const char *s, char c, size_t cols)
{
	size_t i;
	size_t j;
	size_t l;

	j = 0;
	i = 0;
	skip_seps(&i, s, c);
	l = i;
	while(j < cols){
		if(s[i] == c){
			arr[j] = ft_substr(s, l , i - l);
			skip_seps(&i, s, c);
			l = i;
			j++;
		}
		else
			i++;
	}
} 

char	**ft_split(char const *s, char c){
	size_t cols;
	char **arr;

	if(!s)
		return (NULL);
	cols = count_cols(s, c); 
	arr = (char **)malloc((cols + 1)* sizeof(char *));
	if(cols)
		ft_store(arr, s, c, cols);
	return(arr);
}

// int main(void){
	
//     char **arr;
// 	size_t i;

// 	i = 0;
// 	arr = ft_split("hello", '\0');
// 	while(arr[i])
// 		printf("|%s|\n", arr[i++]);
// 	printf("%s\n", arr[i]);	// printf("%p\n",arr);
// }