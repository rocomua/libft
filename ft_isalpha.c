/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:07:34 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/02/27 11:59:23 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main() {
    char test_char;
    int result;

    // Test lowercase alphabetic characters
    test_char = 'a';
    result = ft_isalpha(test_char);
    printf("%c is alphabetic: %d\n", test_char, result);

    // Test uppercase alphabetic characters
    test_char = 'Z';
    result = ft_isalpha(test_char);
    printf("%c is alphabetic: %d\n", test_char, result);

    // Test non-alphabetic characters
    test_char = '5';
    result = ft_isalpha(test_char);
    printf("%c is alphabetic: %d\n", test_char, result);

    return 0;
}*/