/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:48:54 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/06 13:24:13 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (n-- > 0)
	{
		*ptr++ = value;
	}
	return (s);
}*/

void	*ft_calloc(size_t num_elements, size_t element_size)
{
	size_t	total_size;
	void	*ptr;

	total_size = num_elements * element_size;
	ptr = malloc(total_size);
	if (ptr != NULL)
	{
		ft_memset(ptr, 0, total_size);
	}
	return (ptr);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int num_elements = 5;

    // Allocate memory for an array of 5 integers
    ptr = (int *)ft_calloc(num_elements, sizeof(int));

    if (ptr == NULL) {
        // Memory allocation failed
        printf("Memory allocation failed\n");
    } else {
        // Memory allocation successful
        // The allocated memory is initialized to zero
        // You can now use ptr as an array of integers
        for (int i = 0; i < num_elements; i++) {
            printf("%d ", ptr[i]); // This will print 0 for each element
        }
        printf("\n");

        // Don't forget to free the allocated memory when done using it
        free(ptr);
    }

    return 0;
}
*/