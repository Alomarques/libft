/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:14:35 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 10:44:36 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char  *ft_strrchr(const char *str, int c)
{
  int i;
  i = 0;

  while (str[i] != '\0')
    i++;

  while (i >= 0)
  {
    if (str[i] == (char)c)
    {
      return ((char *)(str + i));
    }
    i--;
  }
  return (NULL);
}
