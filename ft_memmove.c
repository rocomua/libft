/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:05:08 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/04 13:07:22 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (src < dst)
		while (len--)
			d[len] = s[len];
	else
		while (len--)
			*d++ = *s++;
	return (dst);
}
/*
 int main() {
	char source[] = "Hello, world!";
	char destination[20];

	ft_memmove(destination, source + 7, 6);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
} */
