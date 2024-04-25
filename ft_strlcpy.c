/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 02:06:18 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/23 02:08:23 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	slen;

	i = 0;
	slen = 0;
	while (src[slen] != '\0')
		slen++;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
	}
	if (dstsize != 0)
	{
		dst[i] = '\0';
	}
	return (slen);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void) {
	char src[] = "Hello, world!";
	char dst1[20], dst2[20];
	size_t len1, len2, size;

	// バッファサイズを変えながらテスト
	for (size = 0; size <= strlen(src) + 1; size++) {
		memset(dst1, '#', sizeof(dst1));  // dst1を初期化
		memset(dst2, '#', sizeof(dst2));  // dst2を初期化

		len1 = ft_strlcpy(dst1, src, size);
		len2 = strlcpy(dst2, src, size);

		printf("Size: %zu\n", size);
		printf("ft_strlcpy: %zu, \"%s\"\n", len1, dst1);
		printf("strlcpy: %zu, \"%s\"\n", len2, dst2);

		// 結果の検証
		if (strcmp(dst1, dst2) != 0 || len1 != len2) {
			printf("Mismatch found!\n");
		}
	}
	return (0);
}
*/
