/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusukeyashiro <ryusukeyashiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 11:37:25 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/30 17:29:06 by ryusukeyash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*hold;
	int		len;

	len = 0;
	hold = (char *)s;
	while (*hold)
	{
		hold++;
		len++;
	}
	if (c == '\0')
		return (hold);
	hold--;
	while (len)
	{
		if (*hold == (char)c)
			return (hold);
		hold--;
		len--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int	main(int argc, char **argv)
// {
// 		const char *str = argv[1];
// 	int		c;
// 	char	*result;
// 	char	*test;

// 	if(argc > 2)
// 	{
// 		c = argv[2][0];
// 		result = ft_strrchr(str,c);
// 		test = strrchr(str,c);
// 		if (result) {
// 			printf("Characterc '%c' found at poscition: %ld\n", c, result - str
// 				+ 1);
// 			printf("Characterc '%c' found at poscition: %ld\n", c, test - str
// 				+ 1);
// 		} else {
// 			printf("Character '%c' not found in \"%s\"\n", c, str);
// 			}
// 	}
// 	return (0);
// }
