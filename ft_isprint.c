/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 15:38:14 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/02/28 14:31:37 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (c);
	else
		return (0);
}

/*#include <stdio.h>

int main() {
    // Test cases
    int test1 = 'A';
    int test2 = 32; // Space
    int test3 = 150; // Not a printable character

    if (ft_isprint(test1)) {
        printf("%c is a printable character\n", test1);
    } else {
        printf("%c is not a printable character\n", test1);
    }

    if (ft_isprint(test2)) {
        printf("%c is a printable character\n", test2);
    } else {
        printf("%c is not a printable character\n", test2);
    }

    if (ft_isprint(test3)) {
        printf("%c is a printable character\n", test3);
    } else {
        printf("%c is not a printable character\n", test3);
    }

    return 0;
}*/
