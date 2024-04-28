/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusukeyashiro <ryusukeyashiro@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 18:44:59 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/28 13:44:41 by ryusukeyash      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*hold;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	hold = ft_strdup(s);
	if (!hold)
		return (NULL);
	while (hold[i])
	{
		hold[i] = (*f)(i, hold[i]);
		i++;
	}
	return (hold);
}
