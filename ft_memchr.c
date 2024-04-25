/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:01:03 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/23 13:05:00 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libft.h>

/*memchr はヌル文字を文字列の終端として扱わず、単なるバイトの一つとみなす。
バイナリデータを扱う上で、ヌル文字関係なく検索できる関数
*/
void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t		i;
	const char	*hold;

	hold = (char *)buf;
	i = 0;
	while (i < n)
	{
		if (*hold == (char)ch)
		{
			return ((void *)hold);
		}
		hold++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	buf1[] = "A\0DE5FGH";
	char	buf2[] = "A\0CDE5FGH";
	char	*ft;
	char	*mem;

	ft = ft_memchr(buf1, '5', sizeof(buf1));
	mem = memchr(buf2, '5', sizeof(buf2));
	printf("ft_memchr = %s\n", ft);
	printf("memchr = %s\n", mem);
}
*/
