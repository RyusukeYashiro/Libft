/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:56:33 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/23 11:37:11 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (needle[j] != '\0' && haystack[i + j] == needle[j])
		{
			if (i + j >= len)
				break ;
			j++;
		}
		if (needle[j] == '\0')
		{
			return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void) {
	const char *haystack = "Hello, world!";
	const char *needle = "world";
	size_t len = 12;  // 検索範囲制限

	const char *result = ft_strnstr(haystack, needle, len);
	const char *test = strnstr(haystack,needle,len);
	if (result) {
		printf("Found: '%s'\n", result);
		printf("Found: '%s'\n",test);
	}
	return (0);
}
*/
