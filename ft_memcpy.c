/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:56:00 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 03:01:38 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*hold;
	char	*s;
	size_t	i;

	hold = (char *)dest;
	s = (char *)src;
	i = 0;
	while (i < n)
	{
		hold[i] = s[i];
		i++;
	}
	return (hold);
}

/*
#include <stdio.h>
#include <string.h> // 標準の memcpy 関数を使うために必要

// 自作の memcpy 関数のプロトタイプ宣言
void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(void)
{
	char	src[] = "";
	char	dest1[50];
	char	dest2[50];

	// 自作の memcpy 関数を使用
	ft_memcpy(dest1, src, sizeof(src));
	// 標準の memcpy 関数を使用
	memcpy(dest2, src, sizeof(src));
	// 結果の表示
	printf("Original memcpy: %s\n", dest2);
	printf("Custom ft_memcpy: %s\n", dest1);
	return (0);
}
*/
