/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusukeyashiro <ryusukeyashiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:14 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/23 01:53:50 by ryusukeyash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//関数 bzero は、与えられたメモリ領域をゼロバイト(\0)で消去することができます。
//メモリ領域の開始アドレスとゼロにするバイト数を指定します。
// memsetは任意の値でメモリを埋めることができるが、bzeroは０でメモリを埋める
// #include <stddef.h>
// #include <stdio.h>
// #include <string.h>

#include <libft.h>

void	ft_bzero(void *s, size_t njj)
{
	size_t	i;
	char	*hold;

	i = 0;
	hold = (char *)s;
	while (i < njj)
	{
		hold[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	buf[6] = "hello";
// 	char	test_buf[6] = "hello";

// 	ft_bzero(test_buf ,6);
// 	bzero(buf,6);
// 	printf("result = %s\n", buf);
// 	printf("test = %s\n", test_buf);
// }
