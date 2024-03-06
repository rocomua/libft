/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:10:23 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/02/27 15:45:03 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

/*#include <stdio.h>

int main() {
    char str1[] = "Hello, world!";
    char str2[] = "";
    char str3[] = "12345";

    printf("Length of '%s': %d\n", str1, ft_strlen(str1));
    printf("Length of '%s': %d\n", str2, ft_strlen(str2));
    printf("Length of '%s': %d\n", str3, ft_strlen(str3));

    return 0;
}*/