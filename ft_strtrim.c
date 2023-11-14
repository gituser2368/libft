/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:04:47 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/08 12:29:36 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_charset(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*trimmed;

	if (!s1)
		return (NULL);
	end = ft_strlen(s1);
	start = 0;
	while (s1[start] && is_in_charset(set, s1[start]))
		start++;
	while (end > start && is_in_charset(set, s1[end - 1]))
		end--;
	trimmed = malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
		trimmed[i++] = s1[start++];
	trimmed[i] = 0;
	return (trimmed);
}
