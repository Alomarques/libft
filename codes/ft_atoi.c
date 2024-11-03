/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:40:04 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/22 15:59:18 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int ft_atoi(const char *str)
{
  size_t i;
  int f;

  i = 0;
  f = 1;
  while (*str == 32 || (*str >= 9 && *str <= 13))
    str++;
  if (*str == 45)
  {
    str++;
    f = -1;
  }
  else if (*str == 43)
    str++;
  while (*str >= 48 && *str <= 57)
  {
    i = (i * 10) + (*str - 48);
    str++;
  }
  return(i*f);
}
