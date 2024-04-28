/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:50:27 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/28 21:41:21 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*str;

	if (count != 0 && (size > SIZE_MAX / count))
		return (NULL);
	if (size != 0 && (count > SIZE_MAX / size))
		return (NULL);
	totalsize = count * size;
	str = malloc(totalsize);
	if (!str)
		return (NULL);
	ft_memset(str, 0, totalsize);
	return (str);
}
/*
int	main(void) {
	int num = 10;
	size_t size = sizeof(int);
	int *array = (int*)calloc(num,size);
	int *array2 = (int*)ft_calloc(num,size);
	printf("calloc    : ");
	for(int i = 0; i < num; i++)
	{
		printf("%d", array[i]);
	}
	printf("\n");
	printf("ft_calloc : ");

	for(int i = 0; i < num; i++)
	{
		printf("%d" , array2[i]);
	}

	printf("\n");

	free(array);
	free(array2);
	return (0);
}
*/
