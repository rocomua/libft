/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_strrchr.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rkogut@student.42warsaw.pl <rkogut>		+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/04 12:35:36 by rkogut@stud	   #+#	#+#			 */
/*   Updated: 2024/03/04 12:50:18 by rkogut@stud	  ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*s)
		s++;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	return (NULL);
}

/*#include <stdio.h>

int main() {
	const char *str = "Hello, world!";
	char *ptr;
	int c = 'o'; // Character to search for

	// Call ft_strrchr to find the last occurrence of 'o' in the string
	ptr = ft_strrchr(str, c);

	if (ptr != NULL) {
		printf("Last occurrence of '%c' found at position: %ld\n", c, ptr - str);
	} else {
		printf("Character '%c' not found\n", c);
	}

	return 0;
}*/