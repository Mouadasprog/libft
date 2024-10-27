/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:57:16 by mouad             #+#    #+#             */
/*   Updated: 2024/10/25 16:00:18 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isdigit(int c)
{
    if(c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char test[122] = "wdijf23434";
    int i = 0;
    while(test[i] !='\0')
    {
        if(ft_isdigit(test[i]))
        {
            printf("%c is digit\n",test[i]);
        }
        i++;
    }
    return 0;
}