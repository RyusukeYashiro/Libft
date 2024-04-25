/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 14:40:57 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 02:45:06 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*hold;
	size_t	i;
	size_t	actual_len;

	i = 0;
	if (!s || start > strlen(s))
		return (0);
	actual_len = ft_strlen(s + start);
	if (actual_len > len)
		actual_len = len;
	hold = (char *)malloc(sizeof(char) * (actual_len + 1));
	if (!hold)
		return (0);
	while (i < actual_len && s[start + i])
	{
		hold[i] = s[start + i];
		i++;
	}
	hold[i] = '\0';
	return (hold);
}
/*
int	main(void)
{
	char	src[] = "substr function Implementation";
	int		st;
	int		en;
	char	*ft_test;

	st = 7;
	en = 9;
	ft_test = ft_substr(src, st, en);
	printf("%s\n", ft_test);
	return (0);
}
*/
