/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:04:54 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/08 12:25:44 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty(void)
{
	char	*err;

	err = malloc(1);
	if (!err)
		return (NULL);
	err[0] = 0;
	return (err);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	length;

	if (!s)
		return (NULL);
	length = ft_strlen(s);
	if (start > (unsigned int)length)
		return (empty());
	if (len > length - start)
		len = length - start;
	res = (char *)malloc((len + 1) * sizeof(*s));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s + start, len + 1);
	return (res);
}
