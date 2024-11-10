/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:45:27 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/10 10:32:55 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str){
	size_t i;
	size_t t;
	size_t oldt;
	int s;
	
	i = 0;
	s = 1;
	t = 0;
	oldt = 0;

	if(str[i] == '-' || str[i] == '+'){	
		if (str[i] == '-')
			s = -1;
		i++;
	}
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

int main(void){
	printf("my func: |%i|\n", ft_atoi("+2147483649929"));
	printf("C func: |%i|\n", atoi("+2147483649929")); 
}
