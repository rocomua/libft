/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:21:39 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/04 16:29:24 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n)
		while (n--)
			if (*str1++ != *str2++)
				return (*(--str1) - *(--str2));
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main() {
    const char str1[] = "Hello";
    const char str2[] = "Hello";
    const char str3[] = "World";
    const char str4[] = "Hell!";

    printf("Compare 1: %d\n", ft_memcmp(str1, str2, 5)); // return 0 (equal)
    printf("Compare 2: %d\n", ft_memcmp(str1, str3, 5)); // a negative value
    printf("Compare 3: %d\n", ft_memcmp(str1, str4, 5)); // a positive value

    return 0;
}
*/