/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusukeyashiro <ryusukeyashiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:35:25 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/28 12:31:43 by ryusukeyash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*hold;
	unsigned char	*s;
	size_t			i;

	hold = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (s < hold && len > 0)
	{
		i = len;
		while (i > 0)
		{
			i--;
			hold[i] = s[i];
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			hold[i] = s[i];
			i++;
		}
	}
	return (hold);
}

/*
int	main(void)
{
	char	dest1[15] = "ABCDDEFG";
	char	dest2[15] = "ABCDDEFG";

	memmove(dest1 + 3, dest1, 3);
	ft_memmove(dest2 + 3, dest2, 3);
	printf("Standard memmove: %s\n", dest1);
	printf("Custom ft_memmove: %s\n", dest2);
	return (0);
}
*/
