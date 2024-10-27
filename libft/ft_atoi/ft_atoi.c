/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 11:14:33 by mouad             #+#    #+#             */
/*   Updated: 2024/10/27 14:14:59 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int is_space(char c)
{
    return (c == '\n' || c == '\f' || c == '\t' || c == '\v' || c == '\r' || c == ' ');
}

int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

int ft_atoi(char *str)
{
    int i = 0;
    while(is_space(str[i]))
    {
        i++;
    }
   
    int sign = 1;
    unsigned long int results = 0;

    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
     while(is_digit(str[i]))
    {
        results = results * 10 + (str[i] - '0');
        i++;
    }
    return results * sign;

}