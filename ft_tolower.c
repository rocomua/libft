/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 12:08:22 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/02/29 14:56:27 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 97 && c <= 122)
		return (c);
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (0);
}

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
