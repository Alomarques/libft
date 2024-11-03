/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:06:14 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/22 19:13:11 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char *ft_strdup(const char *s)
{
  size_t size;

  size = ft_strlen(s) + 1;
  char *copy = malloc(size);

  if (copy == NULL)
    return (NULL);

  ft_memcpy(copy, s, size);

  return (copy);
}
