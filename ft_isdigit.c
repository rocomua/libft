/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:17:13 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/04 13:19:23 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
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
	result = ft_isdigit(test_char);
	printf("%c is alphabetic: %d\n", test_char, result);

	// Test uppercase alphabetic characters
	test_char = 'Z';
	result = ft_isdigit(test_char);
	printf("%c is alphabetic: %d\n", test_char, result);

	// Test non-alphabetic characters
	test_char = '5';
	result = ft_isdigit(test_char);
	printf("%c is alphabetic: %d\n", test_char, result);

	return 0;
}*/