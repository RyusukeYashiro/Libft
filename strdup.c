/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:09:06 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/23 14:35:30 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

//最後はnullを埋めて返す
char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*hold;

	i = 0;
	hold = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (hold == NULL)
		return (NULL);
	while (s1[i])
	{
		hold[i] = s1[i];
		i++;
	}
	hold[i] = '\0';
	return (hold);
}

int	main(int argc, char *argv[])
{
	char	*p;
	char	*str;
	char	*tp;

	if (argc > 1)
	{
		str = argv[1];
		p = ft_strdup(str);
		tp = strdup(str);
		printf("ft_strdup(p) = %s\n", p);
		printf("strdup(str) = %s\n", tp);
		free(p);
	}
}
