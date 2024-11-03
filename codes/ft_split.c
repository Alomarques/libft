/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:19:20 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/26 10:51:08 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int count(char const *s, char c)
{
  size_t i;
  int words;

  i = 0;
  words = 0;
  while (*s)
  {
    if (*s != c && words == 0)
    {
      words = 1;
      i++;
    }
    if (*s == c)
    {
      words = 0;
    }
    s++;
  }
  return (i);
}
char **ft_split(char const *s, char c)
{


}
