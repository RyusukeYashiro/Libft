/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusukeyashiro <ryusukeyashiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:14 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/27 23:24:33 by ryusukeyash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t njj)
{
	ft_memset(s, 0, njj);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char	buf[6] = "hello";
// 	char	test_buf[6] = "hello";

// 	ft_bzero(test_buf ,6);
// 	bzero(buf,6);
// 	printf("result = %s\n", buf);
// 	printf("test = %s\n", test_buf);
// }
