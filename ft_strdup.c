/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strdup.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rkogut@student.42warsaw.pl <rkogut>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/05 15:17:08 by rkogut@stud	   #+#	#+#			 */
/*   Updated: 2024/03/05 15:17:08 by rkogut@stud	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	int		len;

	len = ft_strlen(s);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return (NULL);
	if (ptr)
		ft_memcpy(ptr, s, len + 1);
	return (ptr);
}

/*#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"*/
/*char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/
/*
char	*ft_strdup(const char *str)
{
	char	*duplicate;
	size_t	len;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	duplicate = (char *)malloc((len + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	ft_strcpy(duplicate, str);
	return (duplicate);
}
*/
/*int main() {
	const char *original = "Hello, world!";
	char *duplicate = ft_strdup(original);

	if (duplicate != NULL) {
		// Use the duplicated string
		printf("Original string: %s\n", original);
		printf("Duplicated string: %s\n", duplicate);

		// Free the dynamically allocated memory when done
		free(duplicate);
	} else {
		printf("Memory allocation failed.\n");
	}

	return 0;
}
*/