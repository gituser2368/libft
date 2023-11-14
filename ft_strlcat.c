/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:04:22 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/07 21:22:20 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (dst[i] && i < size)
		i++;
	j = i;
	while (src[i - j] && i < size - 1)
	{
		dst[i] = src[i - j];
		i++;
	}
	if (j < size)
		dst[i] = 0;
	return (j + ft_strlen(src));
}
