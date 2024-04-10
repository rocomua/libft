/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut <ro@ro.com.ua>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 12:25:43 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/04/09 10:12:56 by rkogut           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 96 && c < 123)
		|| (c > 47 && c < 58))
		return (c);
	return (0);
}

/* int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
} */

/* int	ft_isalnum(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
} */

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
/* 
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	int i = 0;

	while (i < 256)
	{
		if ((_Bool)ft_isalnum(i) != (_Bool)isalnum(i))
			printf("Error");
			return (1);
		i++;
	}
	printf("Ok");
	return (0);
} */