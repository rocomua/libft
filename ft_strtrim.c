/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:04:50 by rkogut@stud       #+#    #+#             */
/*   Updated: 2024/04/10 16:04:58 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isinset(char c, char const *set)
{
	int		i;
	int		res;

	i = 0;
	res = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			res = 1;
		i++;
	}
	return (res);
}

static char	*ft_findstart(char const *s1, char const *set)
{
	int		i;

	i = 0;
	while (ft_isinset(s1[i], set) == 1 && s1[i] != '\0')
		i++;
	return ((char *)&s1[i]);
}

static char	*ft_findend(char const *s1, char const *set)
{
	int		i;

	i = ft_strlen(s1) - 1;
	while (ft_isinset(s1[i], set) == 1 && i > 0)
		i--;
	return ((char *)&s1[i]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = ft_findstart(s1, set);
	end = ft_findend(s1, set);
	if (end < start)
		return (ft_calloc(1, sizeof(char)));
	ptr = ft_calloc(end - start + 2, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, start, end - start + 2);
	return (ptr);
}
