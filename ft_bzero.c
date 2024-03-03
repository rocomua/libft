/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut <ro@ro.com.ua>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 12:49:17 by rkogut            #+#    #+#             */
/*   Updated: 2024/03/01 13:39:03 by rkogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(unsigned char *)s++ = 0;
}

/* #include <stdio.h>
#include <string.h>

int main() {
    char buffer[11]; // Allocate a buffer of size 10

    // Fill the buffer with some non-zero values
    strcpy(buffer, "abcdefghiq");

    // Display the buffer before zeroing
    printf("Before ft_bzero: %s\n", buffer);

    // Call ft_bzero to zero out the buffer
    ft_bzero(buffer, sizeof(buffer));

    // Display the buffer after zeroing
    printf("After ft_bzero: %s\n", buffer);

    return 0;
} */