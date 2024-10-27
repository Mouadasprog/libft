/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:01:44 by mouad             #+#    #+#             */
/*   Updated: 2024/10/25 16:06:07 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalnum(int c)
{
    if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char test[100] = "ekjikemc848400---    \n";
    int i = 0;
    while(test[i] != '\0')
    {
        if(ft_isalnum(test[i]))
        {
            printf("%c is alphanumeric\n",test[i]);
        }
        i++;
    }
    return 0;
}