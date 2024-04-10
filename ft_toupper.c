/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut <ro@ro.com.ua>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:55:36 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/04/09 10:15:24 by rkogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c -= 32;
	return (c);
}

/* int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (0);
} */

/* #include <stdio.h>
#include <ctype.h>

int main() {
    char lowercase = 'a';
    char uppercase = toupper(lowercase);

    printf("Uppercase version of %c is %c\n", lowercase, uppercase);

    char lc = 'a';
    char uc = ft_toupper(lowercase);

    printf("FT_Uppercase version of %c is %c\n", lc, uc);


    return 0;
}
 */