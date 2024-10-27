/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:07:39 by mouad             #+#    #+#             */
/*   Updated: 2024/10/26 10:32:29 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;
    char    *str;

    i = 0;
    str = s;
    while(i < n)
    {
        str[i] = (unsigned char)c;
        i++;
    }

}

int main(void)
{
    char test[10] = "p";
    ft_memset(test,'A',sizeof(test));
    int i = 0;
    while(test[i] != '\0')
    {
        printf("%c\n",test[i]);
        i++;
    }
    return 0;
}

