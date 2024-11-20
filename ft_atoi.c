/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:45:27 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/20 16:41:33 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_get_sign(int *s, size_t *i, const char *str){
	*s = 1;
	if(str[*i] == '-' || str[*i] == '+')
	{	
		if (str[*i] == '-')
			*s = -1;
		(*i)++;
	}
	
}
void ft_skip_space(size_t *i, const char *str)
{
	*i = 0;
	while(str[*i] == 32 || (str[*i] >= 9 && str[*i] <= 13))
		(*i)++;
}

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	t;
	size_t	oldt;
	int	s;
	
	t = 0;
	oldt = 0;
	ft_skip_space(&i, str);
	ft_get_sign(&s, &i, str);
	while(str[i] >= '0' && str[i] <= '9')
	{
		t = (t * 10) + (str[i++] - '0');
		if (oldt > t && s < 0)
			return(0);
		else if (oldt > t && s > 0)
			return(-1);
		oldt = t;

	}
	return((int)t * s);
}

// int main(void){
// 	printf("my func: |%i|\n", ft_atoi("+2147483649929"));
// 	printf("C func: |%i|\n", atoi("+2147483649929")); 
// }
