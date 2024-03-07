/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut <ro@ro.com.ua>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 15:22:55 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/07 17:33:48 by rkogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlcpy(char *dst, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

/*#include <stdio.h>

int main() {
    char src[] = "Hello, world!";
    char dst[20]; // Make sure dst has enough space to hold the copied string

    unsigned int copied_len = strlcpy(dst, src, sizeof(dst));

    printf("Copied string: %s\n", dst);
    printf("Length of copied string: %zu\n", copied_len);

    return 0;
}*/