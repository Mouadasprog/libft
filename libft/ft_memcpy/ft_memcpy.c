/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:42:17 by mouad             #+#    #+#             */
/*   Updated: 2024/10/26 11:11:34 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memcpy(void *dest, const char   *src,size_t n)
{
    size_t  i;
    i = 0;
    if(!dest && !src)
    {
        return (NULL);
    }
    if(dest != src)
    {
        while(i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    return (dest);
}

#include <stdio.h>
#include <string.h>

// Your ft_memcpy function here

int main(void) {
    // Test 1
    char src1[] = "Hello, World!";
    char dest1[20];
    ft_memcpy(dest1, src1, strlen(src1) + 1);
    printf("Test 1 - Basic Copy: %s\n", dest1); // Expected: "Hello, World!"

    // Test 2
    char overlap[] = "Hello, World!";
    ft_memcpy(overlap + 7, overlap, 6);
    printf("Test 2 - Overlapping Copy: %s\n", overlap); // Expected: "Hello, Hello!"

    // Test 3
    char src2[] = "No Change Here";
    char dest2[20];
    ft_memcpy(dest2, src2, 0);
    printf("Test 3 - Zero Length Copy: %s\n", dest2); // Expected: Should be unchanged

    // Test 4
    char *src3 = "Null Test";
    void *result = ft_memcpy(NULL, src3, 10);
    printf("Test 4 - NULL Destination: %s\n", result == NULL ? "NULL returned" : "Not NULL");

    // Test 5
    char *dest4 = "Dest";
    result = ft_memcpy(dest4, NULL, 10);
    printf("Test 5 - NULL Source: %s\n", result == NULL ? "NULL returned" : "Not NULL");

    // Test 6
    char src5[] = "Full Copy Test";
    char dest5[20];
    ft_memcpy(dest5, src5, sizeof(src5));
    printf("Test 6 - Full Size Copy: %s\n", dest5); // Expected: "Full Copy Test"

    // Test 7
    char src6[] = "Short";
    char dest6[10];
    ft_memcpy(dest6, src6, 10);
    printf("Test 7 - Size Greater than Source: %s\n", dest6); // Expected: "Short" + garbage

    return 0;
}
