/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloisiojr <aloisiojr@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:00:27 by aloisiojr         #+#    #+#             */
/*   Updated: 2024/10/20 11:48:37 by aloisiojr        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t  ft_strlen(const char *s)
{
  size_t length;
  length = 0;

  while (s[length] != '\0')
    length++;
  return (length);
}
