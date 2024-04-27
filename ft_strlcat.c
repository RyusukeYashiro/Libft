/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusukeyashiro <ryusukeyashiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:16:00 by ryusukeyash       #+#    #+#             */
/*   Updated: 2024/04/27 17:16:45 by ryusukeyash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dst_len = strlen(dst);
	src_len = strlen(src);
	if (!dst || dstsize == 0)
		return (dstsize + src_len);
	if (dstsize <= dst_len)
	{
		return (dstsize + src_len);
	}
	while (dst_len + i < dstsize - 1 && src[i])
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}

// int	main(void)
// {
// 	char dst[256] = "";
// 	const char *src = "42tokyo";
// 	size_t dstsize = 0;
// 	size_t result;

// 	result = ft_strlcat(dst, src, dstsize);
// 	printf("After ft_strlcat: \"%s\", Length: %zu\n", dst, result);

// 	// result = strlcat(dst, src, dstsize);
// 	// printf("After standard strlcat: \"%s\", Length: %zu\n", dst, result);
// 	return (0);
// }
