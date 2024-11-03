/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:30:54 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/24 14:59:24 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
  size_t i;
  size_t j;

  if (!s1 || !set)
    return (NULL);

  while (*s1 && ft_strchr(set, *s1))
  {
    s1++;
  }
  i = ft_strlen(s1);
  while (i > 0 && ft_strchr(set, s1[i-1]))
  {
    i--;
  }
  return (ft_substr(s1, 0, i));

}
