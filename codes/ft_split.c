/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:19:20 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/12/03 18:03:33 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	count_substrings(char const *s, char c)
{
	int	i = 0, j;

	i = 0, j = 0;
	while (*s)
	{
		if (*s != c && !j)
		{
			j = 1;
			i++;
		}
		else if (*s == c)
			j = 0;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	const char	*start;

	int numstr, i = 0;
	if (!s)
		return (NULL);
	numstr = count_substrings(s, c);
	result = ft_calloc(numstr + 1, sizeof(char *));
	if (!result)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			result[i] = ft_substr(start, 0, s - start);
			if (!result[i])
			{
				while (i--)
					free(result[i]);
				free(result);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	return (result);
}
