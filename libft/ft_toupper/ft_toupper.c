/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 11:12:50 by mouad             #+#    #+#             */
/*   Updated: 2024/10/26 11:47:59 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_toupper(int  c)
{
    if(c >= 97 && c <= 122)
    {
        c -= 32;
    }
    return (c);
}
int main(void)
{
    char nom[10] = "mouad";
    char result[20];
    int i = 0;
    while(nom[i] != '\0')
    {
        result[i] = ft_toupper(nom[i]);
        i++;
    }
    i = 0;
    while(result[i] != '\0')
    {
        printf("%c",result[i]);
        i++;
    }
    printf("\n");
    return 0;
}