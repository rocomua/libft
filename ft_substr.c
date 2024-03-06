/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:55:12 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/06 11:54:40 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	i;
	char	*substr;

	if (s == NULL)
		return (NULL);
	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		return (NULL);
	if (start + len > s_len)
		len = s_len - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[len] = '\0';
	return (substr);
}

/*#include <stdio.h>
#include <stdlib.h>

// Function prototype
char    *ft_substr(char const *s, unsigned int start, size_t len);

int main(void) {
    char *s = "This is a test string.";
    unsigned int start = 5;
    size_t len = 7;

    // Call ft_substr function
    char *substr = ft_substr(s, start, len);

    // Check if substr is NULL
    if (substr == NULL) {
        printf("Subtring is NULL.\n");
    } else {
        printf("Original string: %s\n", s);
        printf("Sbstr fr ind %u with length %zu: %s\n", start, len, substr);
        free(substr); // Free the allocated memory
    }

    return 0;
}*/