/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 11:55:36 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/02/29 12:06:23 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercase = 'z';
    char uppercase = toupper(lowercase);

    printf("Uppercase version of %c is %c\n", lowercase, uppercase);

    char lc = 'z';
    char uc = ft_toupper(lowercase);

    printf("FT_Uppercase version of %c is %c\n", lc, uc);


    return 0;
}
*/