/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:46:25 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/12 20:38:39 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    unsigned int i;
    char *arr;

    if(!s)
        return(NULL);
    arr = (char *)malloc(ft_strlen((char *)s) + 1);
    if(!arr)
        return (NULL);
    i = 0;
    
    while(s[i]){
        arr[i] = f(i, (char )s[i]);
        i++;
    }
    arr[i] = '\0';
    return (arr);
}