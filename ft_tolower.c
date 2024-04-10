/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:08:22 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/04/10 11:47:19 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		c += 32;
	return (c);
}
*/
/*#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'A';
    char converted_ch;

    // Convert uppercase 'A' to lowercase using tolower
    converted_ch = tolower(ch);

    printf("Original character: %c\n", ch);
    printf("Converted character: %c\n", converted_ch);

    char uc = 'A';
    char lc;

    // Convert uppercase 'A' to lowercase using tolower
    lc = ft_tolower(uc);

    printf("Original character: %c\n", uc);
    printf("Converted character: %c\n", lc);


    return 0;
}*/
