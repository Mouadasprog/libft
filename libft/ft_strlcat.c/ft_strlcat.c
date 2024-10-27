/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 15:39:32 by mouad             #+#    #+#             */
/*   Updated: 2024/10/27 14:25:50 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str) {
    int i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t i;

    // If size is less than or equal to dst_len, no concatenation happens
    if (size <= dst_len) {
        return size + src_len;
    }

    // Copy from src to dst until we reach size - 1
    for (i = 0; i < size - dst_len - 1 && src[i]; i++) {
        dst[dst_len + i] = src[i];
    }
    
    // Null terminate the destination string
    dst[dst_len + i] = '\0';

    return dst_len + src_len; // Return the total length of the new string
}

int main(void) {
    char nom[20] = "Benmahmoud";
    char prenom[20] = "Mouad";
    size_t total = ft_strlcat(nom, prenom, sizeof(nom)); // Use sizeof(nom) for destination

    printf("The concatenated string is: %s\n", nom); // Print nom instead of prenom
    printf("The total length of the string is: %zu\n", total); // Use %zu for size_t

    return 0;
}
