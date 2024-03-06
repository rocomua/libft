/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:06:07 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/05 18:37:31 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*n)
		return ((char *)h);
	while (h[i] != '\0' && i < len)
	{
		if (h[i] == n[0])
		{
			while (n[j] != '\0' && h[i + j] == n[j] && i + j < len)
			{
				if (n[j + 1] == '\0')
					return ((char *)&h[i]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}

/*#include <stdio.h>

int main() {
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    char *result = ft_strnstr(haystack, needle, 13);

    if (result != NULL) {
        printf("Substring found at position: %ld\n", result - haystack);
    } else {
        printf("Substring not found.\n");
    }

    return 0;
}*/