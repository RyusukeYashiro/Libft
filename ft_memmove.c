/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 17:35:25 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/23 01:50:30 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*hold;
	char	*s;
	size_t	i;

	hold = (char *)dst;
	s = (char *)src;
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

	// 標準の memmove を使用
	// bufの先頭から3バイト進めた位置にbufの先頭から3バイトコピー
	memmove(dest1 + 3, dest1, 3);
	// 配列の状態: ['A', 'B', 'C', 'D', 'D', 'E', 'F', 'G', '\0']
	//			|_______|           コピー元
	//					|_______| コピー先
	//	オーバーラップは、コピー元とコピー先が同一の配列（dest1）内にあるため
	//	コピー元のデータがコピー先のデータを上書きする前にコピーが完了しなけ
	//	自作の memmove を使用
	ft_memmove(dest2 + 3, dest2, 3);
	// 結果の表示
	printf("Standard memmove: %s\n", dest1);
	printf("Custom ft_memmove: %s\n", dest2);
	return (0);
}
*/
