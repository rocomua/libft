/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 13:56:24 by rkogut            #+#    #+#             */
/*   Updated: 2024/03/04 13:03:00 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void	*dest, void const *src, size_t n)
{
	void	*dest_ptr;

	dest_ptr = dest;
	if (!dest && !src)
		return (dest);
	while (n--)
		*(char *)dest++ = *(char *)src++;
	return (dest_ptr);
}

/*#include <stdio.h>
#include <stddef.h>

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];
    
    // Copying src to dest using ft_memcpy
    ft_memcpy(dest, src, sizeof(src));
    
    // Printing the copied string
    printf("Copied string: %s\n", dest);
    
    return 0;
}*/