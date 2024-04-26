/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 15:59:23 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 19:38:28 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*hold;
	size_t	start;
	size_t	end;

	if (*s1 || *set)
		return (0);
	if (!ft_strlen(s1))
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	hold = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!hold)
		return (0);
	ft_strlcpy(hold, &s1[start], end - start + 2);
	return (hold);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*test;
	char	*st;
	char	*ans;

	test = "1234aaaa22331122";
	st = "1234";
	ans = ft_strtrim(test,st);
	if(ans != NULL){
		printf("%s" , ans);
	}
}
*/
