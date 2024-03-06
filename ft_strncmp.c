/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 12:51:16 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/04 15:59:38 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "World";
    unsigned int n = 5; // Number of characters to compare

    printf("Comparing %u chars: %d\n", n, ft_strncmp(str1, str2, n));
    printf("Comparing %u chars: %d\n", n, ft_strncmp(str1, str3, n));

    return 0;
}*/