/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:30:29 by aelbour           #+#    #+#             */
/*   Updated: 2024/10/25 10:42:00 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *b, int c, size_t len){
    unsigned char x;
    size_t i;
    unsigned char *p;

    p = (unsigned char *)b;
    i = 0;
    x = (unsigned char) c;
    while(i < len){
        p[i++] = x
    }
    return (b);
}
