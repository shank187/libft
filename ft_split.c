/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:46:26 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/20 21:56:48 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_seps(size_t *i, char const *s, char c)
{
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
		if(s[i] == c)
		{
			skip_seps(&i, s, c);
			t++;
		}
		else
			i++;
	}
	if(s[i - 1] != c)
		t++;
	return(t);
}
 
int check_crash(char **arr, size_t i){
	
	if(!arr[i])
	{
		if(i)
		{
			i--;
			while(i)
			{
				free(arr[i]);
				i--;
			}
		}
		free(arr[0]);
		free(arr);
		return(0);
	}
	return(1);
}

int	ft_store(char **arr, const char *s, char c, size_t cols)
{
	size_t i;
	size_t j;
	size_t l;

	j = 0;
	i = 0;
	skip_seps(&i, s, c);
	l = i;
	while(j < cols)
	{
		if(s[i] == c || !s[i])
		{
			arr[j] = ft_substr(s, l , i - l);
			if(!check_crash(arr, j))
				return(0);
			skip_seps(&i, s, c);
			l = i;
			j++;
		}
		else
			i++;
	}
	return(1);
} 

char	**ft_split(char const *s, char c)
{
	size_t cols;
	char **arr;

	if(!s)
		return (NULL);
	cols = count_cols(s, c); 
	// printf("the cols %lu\n",cols);
	arr = (char **)malloc((cols + 1)* sizeof(char *));
	if(!arr)
		return(NULL);
	arr[cols] = NULL;
	if(cols)
	{
		if(ft_store(arr, s, c, cols))
			return(arr);
		else
			return(NULL);		
	}
	return(arr);
}

// int main(void)
// {
// 	int i = 0;
// 	char **arr = ft_split("hello!",' ');
// 	while(arr)
// 	{
// 		printf("%s\n",arr[i]);
// 		free(arr[i]);
// 		i++;
// 	}
// 	printf("%s\n",arr[i]);
// 	free(arr[i]);
// 	free(arr);
	
// }
