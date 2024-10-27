/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 09:59:07 by mouad             #+#    #+#             */
/*   Updated: 2024/10/26 10:01:33 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isascii(int c)
{
    if(c >= 0 && c <= 127)
    {
        return 1;
    }
    return 0;
}

int main(void)
{
    char test[100] = "ejd 8487 edjnjdc";
    int i = 0;
    while(test[i] != '\0')
    {
        if(ft_isascii(test[i]))
        {
            printf("%c is in ascii table\n",test[i]);
        }
        i++;
    }
    return 0;
}