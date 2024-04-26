/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:44:59 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 18:52:56 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*hold;
	unsigned int	i;

	if (!s || !f)
		return (0);
	hold = ft_strdup(s);
	if (!hold)
		return (0);
	while (hold[i])
	{
		hold[i] = (*f)(i, hold[i]);
		i++;
	}
	return (hold);
}
