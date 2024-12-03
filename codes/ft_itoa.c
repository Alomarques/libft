/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 15:48:59 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 16:11:00 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static char	*ft_charconv(char *s, unsigned int num, long int len)
{
	while (num > 0)
	{
		s[len--] = 48 + (num % 10);
		num = num / 10;
	}
	return (s);
}

static long int	ft_numlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	long int		numlen;

	numlen = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (numlen + 1));
	if (!(str))
		return (NULL);
	str[numlen--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		num = n * -1;
		str[0] = '-';
	}
	else
		num = n;
	str = ft_charconv(str, num, numlen);
	return (str);
}
