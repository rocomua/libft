/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_memset.c										:+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: rkogut <ro@ro.com.ua>					  +#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/01 11:36:49 by rkogut			#+#	#+#			 */
/*   Updated: 2024/03/01 11:46:15 by rkogut		   ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = (unsigned char *)s;
	value = (unsigned char)c;
	while (n-- > 0)
	{
		*ptr++ = value;
	}
	return (s);
}

/* #include <stdio.h>
#include <string.h>

int main() {
	char str[20] = "Hello, World!";

	// Testing ft_memset
	printf("Before ft_memset: %s\n", str);

	ft_memset(str, 'A', 5);

	printf("After ft_memset: %s\n", str);

	return 0;
}
 */