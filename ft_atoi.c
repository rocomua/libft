/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:39:55 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/03/06 13:21:46 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	num;

	num = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' && *str == '+')
		str++;
	while (*str >= 0 && *str <= 9)
		num = num * 10 + *str++ + '0';
	return (num * sign);
}
/*
int	ft_isspace(int c)
{
	return (c == '\f' || c == '\n' || c == '\r' \
	|| c == '\t' || c == '\v' || c == ' ');
}

#include <stdio.h>
#include <stdlib.h>

int	main()
{
	char str[] = "  -12345abc";
	int num = atoi(str);
	printf("The converted integer is: %d\n", num);
	return (0);
}*/
