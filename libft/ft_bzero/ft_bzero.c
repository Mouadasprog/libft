/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:26:35 by mouad             #+#    #+#             */
/*   Updated: 2024/10/26 10:38:15 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_bzero(void   *s, size_t  n)
{
    char    *str;
    size_t  i;

    i = 0;
    str = s;
    while(i < n)
    {
        str[i] = 0;
        i++;
    }
}
int main(void)
{
    char    test[20];
    size_t  i;
    ft_bzero(test,sizeof(test));
    i = 0;
    while(i < sizeof(test))
    {
        printf("%d\n",test[i]);
        i++;
    }
    return 0;
}