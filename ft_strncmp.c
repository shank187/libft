/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:56:02 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/09 17:28:52 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2 ,size_t n){
    size_t j;

    j = 0;
    while((s1[j] && s2[j]) && s1[j] == s2[j] && j < n -1)
        j++;
    if(s1[j] < s2[j])
        return (-1);
    if(s1[j] > s2[j])
        return (1);
    return (0);
}
