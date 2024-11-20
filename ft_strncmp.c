/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:56:02 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/18 17:43:19 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2 ,size_t n){
    size_t j;
    unsigned char *us1;
    unsigned char *us2;

    us1 = (unsigned char *)s1;
    us2 = (unsigned char *)s2;
    j = 0;
    while((us1[j] && us2[j]) && us1[j] == us2[j] && j < n -1 && n)
        j++;
    if(us1[j] < us2[j] && n)
        return (-1);
    if(us1[j] > us2[j] && n)
        return (1);
    return (0);
}
