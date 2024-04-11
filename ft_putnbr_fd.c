/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkogut@student.42warsaw.pl <rkogut>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 20:49:59 by rkogut            #+#    #+#             */
/*   Updated: 2024/04/11 11:03:56 by rkogut@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nbr = (unsigned int)(nb * -1);
	}
	else
		nbr = (unsigned int)nb;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	ft_putchar_fd((char)(nbr % 10 + 48), fd);
}

/* #include "libft.h"

static int	base_check(char const *base)
{
	size_t		error;
	char const	*base_ptr;

	error = 0;
	if (!base || !*base)
		return (1);
	while (*base)
	{
		if (!(*base > 31 && *base < 127)
			|| *base == ' ')
		{
			error = 1;
			base++;
		}
		base_ptr = base - 1;
		while (base_ptr >= base)
		{
			if (*base_ptr == *base)
				error = 1;
			base_ptr--;
		}
		base++;
	}
	return (error);
}

static void	putnbr_base_fd(int nbr, const char *base, int fd)
{
	int		base_len;
	long long int	nb;
	char		c;

	if (base_check(base))
		return ;
	base_len = ft_strlen(base);
	if (nbr < 0)
	{
		write(fd, "-", 1);
		nb = -((long long int)nbr);
	}
	else
		nb = (long long int)nbr;
	if (nb < base_len)
	{
		c = *(base + (size_t)nb % base_len);
		write(fd, &c, 1);
	}
	else
	{
		putnbr_base_fd(nb / base_len, base, fd);
		putnbr_base_fd(nb % base_len, base, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char const	*base;

	base = "0123456789";
	if ((long long int)n == LLONG_MIN)
		write(1, "-9223372036854775808", 20);
	else
		putnbr_base_fd(n, base, fd);
 }*/