/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:03:45 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/12 18:16:02 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int get_max_10(int nb){
	size_t i;

	i = 1;
	if(!nb)
		return(1);
	while(nb){
		nb /= 10;
		i *=10;
	}
	return (i / 10);
}

char *ft_itoa(int n){
	char s[20];
	unsigned int i;
	int power;
	long long nb;

	power = get_max_10(n);
	nb = n;
	i = 0;
	if (n < 0){
		s[i++] = '-';
		nb *= -1;
	}
	while(power){
		s[i++] = ((nb / power) % 10) + '0';
		power /= 10;
	}
	s[i] = '\0'; 
	return (ft_strdup(s));
}

int main(void){
    char *arr;
    arr = ft_itoa(23838);
    printf("23838\n%s\n", arr);
    free(arr);
}