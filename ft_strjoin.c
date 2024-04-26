/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 19:05:28 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 02:45:29 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_cat(char *hold, const char *string)
{
	size_t	i;

	i = 0;
	while (string[i])
	{
		hold[i] = string[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*hold;
	size_t	len;

	if (s1 == NULL || s2 == NULL)
		return (0);
	len = strlen(s1) + strlen(s2);
	hold = (char *)malloc(sizeof(char) * len + 1);
	if (hold == NULL)
		return (0);
	ft_cat(hold, s1);
	ft_cat(hold + strlen(s1), s2);
	hold[len] = '\0';
	return (hold);
}
/*
int	main(int ac, char *av[])
{
	char	*s1;
	char	*s2;
	char	*ft;

	if (ac > 2)
	{
		s1 = av[1];
		s2 = av[2];
		ft = ft_strjoin(s1, s2);
		printf("ft_strjoin = %s\n", ft);
	}
}
*/