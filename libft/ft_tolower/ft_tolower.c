/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:48:35 by mouad             #+#    #+#             */
/*   Updated: 2024/10/26 11:50:21 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_tolower(int  c)
{
    if(c >= 'A' && c <= 'Z')
    {
        c += 32;
    }
    return (c);
}
int main(void)
{
    char nom[10] = "MOUAD";
    char result[20];
    int i = 0;
    while(nom[i] != '\0')
    {
        result[i] = ft_tolower(nom[i]);
        i++;
    }
    result[i] = '\0';
    i = 0;
    while(result[i] != '\0')
    {
        printf("%c",result[i]);
        i++;
    }
    printf("\n");
    return 0;
}