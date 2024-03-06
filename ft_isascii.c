/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:45:38 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/02/27 14:09:51 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*#include <stdio.h>

int main() {
    char test_char1 = 'A';
    char test_char2 = '$';
    char test_char3 = '\n';
    char test_char4 = 128;

    if (ft_isascii(test_char1)) {
        printf("%c is an ASCII character.\n", test_char1);
    } else {
        printf("%c is not an ASCII character.\n", test_char1);
    }

    if (ft_isascii(test_char2)) {
        printf("%c is an ASCII character.\n", test_char2);
    } else {
        printf("%c is not an ASCII character.\n", test_char2);
    }

    if (ft_isascii(test_char3)) {
        printf("%c is an ASCII character.\n", test_char3);
    } else {
        printf("%c is not an ASCII character.\n", test_char3);
    }

    if (ft_isascii(test_char4)) {
        printf("%c is an ASCII character.\n", test_char4);
    } else {
        printf("%c is not an ASCII character.\n", test_char4);
    }

    return 0;
}
*/