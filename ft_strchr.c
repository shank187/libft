/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:11:44 by aelbour           #+#    #+#             */
/*   Updated: 2024/10/25 16:20:50 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlen(char *s){

	size_t i;

	i = 0;
	while(s[i])
		i++;
	return (i);
}

char *ft_strchr(const char *s, int c){
    size_t i;

    i = ft_strlen((char *) s);
    while(i >= 0)
        if (s[i--] == c)
            return ((char *) &s[i]);
    return (NULL);
    
}