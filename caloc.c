/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   caloc.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 12:50:27 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/24 12:50:45 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	totalsize;
	void	*str;

	totalsize = count * size;
	str = malloc(totalsize);
	if (!str)
		return (NULL);
	memset(str, 0, totalsize);
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
