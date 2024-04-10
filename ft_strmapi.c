/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:49:44 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/04/10 16:51:57 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		slen;
	char	*res;

	if (s == NULL || f == NULL)
		return (NULL);
	slen = ft_strlen(s);
	i = 0;
	res = ft_calloc(slen + 1, sizeof(char));
	if (res == NULL)
		return (NULL);
	while (i < slen)
	{
		*(res + i) = f(i, *(s + i));
		i++;
	}
	return (res);
}
