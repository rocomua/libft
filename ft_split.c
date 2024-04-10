/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_split.c										 :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rkogut@student.42warsaw.pl <rkogut>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/04/10 16:14:35 by rkogut@stud	   #+#	#+#			 */
/*   Updated: 2024/04/10 16:14:51 by rkogut@stud	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

static void	*ft_yikes(char **res, int j)
{
	while (j > 0)
	{
		j--;
		free(res[j]);
	}
	free(res);
	return (NULL);
}

static int	ft_strclen(const char *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	**ft_countnalloc(char const *s, char c, int *count)
{
	int		i;
	char	**res;
	int		count_cpy;

	*count = 0;
	count_cpy = *count;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count_cpy++;
		i++;
	}
	*count = count_cpy;
	res = ft_calloc(*count + 1, sizeof(char *));
	return (res);
}

static char	**ft_fill(int *count, const char *s, char **res, char c)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	while (j < *count)
	{
		while (s[i] == c)
			i++;
		len = ft_strclen(&s[i], c);
		res[j] = ft_calloc(len + 1, sizeof(char));
		if (res[j] == NULL)
			return (ft_yikes(res, j));
		ft_strlcpy(res[j], &s[i], len + 1);
		i += len + 1;
		j++;
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**res;

	if (s == NULL)
		return (NULL);
	res = ft_countnalloc(s, c, &count);
	if (res == NULL)
		return (NULL);
	return (ft_fill(&count, s, res, c));
}