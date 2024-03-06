/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:15:32 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/04 16:18:00 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
		if (*str++ == (unsigned char)c)
			return (str - 1);
	return (NULL);
}
/*
#include <stdio.h>

int main() {
	const char str[] = "Hello, World!";
	const char *found = ft_memchr(str, 'W', sizeof(str));
	
	if (found != NULL) {
		printf("Found 'W' at position: %ld\n", found - str);
	} else {
		printf("The byte 'W' was not found.\n");
	}
	
	return 0;
}*/
