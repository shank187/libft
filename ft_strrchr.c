/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:37:32 by aelbour           #+#    #+#             */
/*   Updated: 2024/11/09 18:08:16 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  *ft_strrchr(const char *s, int c){
    size_t i;

    i = ft_strlen((char *) s);
    while(i > 0){
        if (s[i] == (char ) c)
            return ((char *) &s[i]);
        i--;
    }
    if (s[0] == (char) c)
        return ((char *) s);
    return (NULL);
}

// int main(void)
// {
//     const char c[] = "hellow world";
//     printf("my func |%p| \n", ft_strrchr(c, 'w'));
//     printf("C func  |%p| \n", strrchr(c, 'w'));
// }
