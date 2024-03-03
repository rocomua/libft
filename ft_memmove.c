/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut <ro@ro.com.ua>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 15:53:55 by rkogut            #+#    #+#             */
/*   Updated: 2024/03/03 16:47:54 by rkogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void*	ft_memmove(void* dest, const void* src, size_t n)
{
	char* d = (char*)dest;
	const char* s = (const char*)src;

	if (s < d && s + n > d)
	{
		size_t i = n;
		while (i > 0) {
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		size_t i = 0;
		while (i < n) {
			d[i] = s[i];
			i++;
		}
	}
	return dest;
}

int main() {
	char source[] = "Hello, world!";
	char destination[20];

	ft_memmove(destination, source + 7, 6);
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}
