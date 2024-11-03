/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:58:39 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/24 10:30:06 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  size_t len;
  char *new;
  size_t len_s1 = ft_strlen(s1);
  size_t len_s2 = ft_strlen(s2);

  if (!s1 || !s2)
    return (NULL);

  len = len_s1 + len_s2 + 1;
  new = malloc(len);
  if (!new)
    return (NULL);
  ft_memcpy(new, s1, len_s1);
  ft_memcpy(new + len_s1, s2, len_s2);
  new[len_s1 + len_s2] = '\0';

  return (new);
}
