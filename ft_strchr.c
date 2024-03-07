/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 13:02:59 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/07 16:28:54 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*chr;

	chr = (char *)s;
	while (*chr != c)
	{
		if (!*chr)
			return (NULL);
		chr++;
	}
	return (chr);
}

/*
#include <stdio.h>

int	main(void)
{
	const char	*str = "Hello, World!";
	const char	*ptr;

	ptr = strchr(str, 'o');
	if (ptr != NULL)
	{
		printf("Found character 'o' at position: %ld\n", ptr - str);
	}
	else
	{
		printf("Character 'o' not found.\n");
	}

	return (0);
}*/