/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:59:47 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/17 18:13:42 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strchr(const char *str, int c)
{
  while (*str != (char)c && *str != '\0')
  {
    ++str;
  }
  if (*str == (char)c)
  {
    return(str);
  }
  return(NULL);
}
