/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelbour <aelbour@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 22:09:51 by aelbour           #+#    #+#             */
/*   Updated: 2024/10/24 22:11:06 by aelbour          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_isalpha(unsigned char c){
    if((c >= 65 && c <= 90) || (c >= 97 && c <= 22))
        return (1);
    return (0);
}

int ft_isdigit(unsigned char c){
    if(c >= 48 && c <= 57)
        return (1);
    return (0);
}

int ft_isalnum(unsigned char c){
    if (ft_isalpha(c) || ft_isdigit(c))
        return(1);
    return (0);
}
