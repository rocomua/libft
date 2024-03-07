/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:59:18 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/07 16:51:29 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	char	*ptr;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (*s1 == '\0' && *s2 == '\0')
		return (ft_calloc(1, sizeof(char)));
	ptr = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	i = 0;
	while (ft_strlen(s1) + ft_strlen(s2) +1)
	{
		while (i < ft_strlen(s1))
		{
			*(ptr + i) = *((char *)s1 + i);
			i++;
		}
		*(ptr + i) = *((char *)s2 + i - ft_strlen(s1));
		i++;
	}
	if (ft_strlen(s2) != '\0')
		*(ptr + i) = '\0';
	return (ptr);
}

#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memset(void *s, int c, size_t n);

int main(void)
{
    char *s1 = "Hello, ";
    char *s2 = "world!";
    char *result;

    result = ft_strjoin(s1, s2);
    if (result == NULL)
    {
        printf("Error: Memory allocation failed.\n");
        return (1);
    }

    printf("Result: %s\n", result);

    // Remember to free the allocated memory
    free(result);

    return (0);
}
