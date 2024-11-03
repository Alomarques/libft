/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 09:40:01 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 11:36:15 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void  *ft_bzero(void *s, size_t n)
{
  unsigned char *x;
  x = (unsigned char *)s;
  size_t i;
  i = 0;

  while (i < n )
  {
    x[i] = '\0';
    i++;
  }
  return (s);
}
