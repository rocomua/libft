/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:43:02 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/04/10 15:48:54 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	j = 0;
	while (*(dst + i) && i < size)
		i++;
	while (*(src + j) && i < size - 1)
	{
		*(dst + i) = *(src + j);
		i++;
		j++;
	}
	if (i < size)
		*(dst + i) = '\0';
	return (i - j + ft_strlen(src));
}
