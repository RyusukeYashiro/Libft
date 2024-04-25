/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 02:04:06 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 02:51:19 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*p != '\0')
	{
		if (*p == c)
		{
			return ((char *)p);
		}
		p++;
	}
	if (c == '\0')
	{
		return ((char *)p);
	}
	return (NULL);
}
/*    s が指す文字列の中で最初の（ char に変換された） c が出現する位置を特定する
int	main(int argc, char **argv)
{
		const char *str = argv[1];
	int		c;
	char	*result;
	char	*test;

	if(argc > 2)
	{
		c = argv[2][0];
		result = ft_strchr(str,c);
		test = strchr(str,c);
		if (result) {
			printf("Characterc '%c' found at poscition: %ld\n", c, result - str
				+ 1);
			printf("Characterc '%c' found at poscition: %ld\n", c, test - str
				+ 1);
		} else {
			printf("Character '%c' not found in \"%s\"\n", c, str);
			}
	}
	return (0);
}
*/
