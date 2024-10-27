/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:51:35 by mouad             #+#    #+#             */
/*   Updated: 2024/10/25 15:56:28 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isalpha(int c)
{
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char test[100] = "mouaD12";
    int i = 0;
    while(test[i] != '\0')
    {
        if(ft_isalpha(test[i]))
        {
            printf("%c is alpha\n",test[i]);
        }
        i++;
    }
    return 0;
}