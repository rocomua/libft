/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:25:43 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/05 12:35:37 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}

/*#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = '!';

    if (isalnum(ch)) {
        printf("%c is alphanumeric.\n", ch);
    } else {
        printf("%c is not alphanumeric.\n", ch);
    }
	if (ft_isalnum(ch)) {
		printf("%c is alphanumeric.\n", ch);
	} else {
		printf("%c is not alphanumeric.\n", ch);
	}

    return 0;
}*/