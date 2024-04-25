/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryyashir <ryyashir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 18:33:59 by ryyashir          #+#    #+#             */
/*   Updated: 2024/04/26 03:51:14 by ryyashir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_check(const char **string, int *sign)
{
	while (ft_isspace(**string))
		(*string)++;
	while (**string == '-' || **string == '+')
	{
		if (**string == '-')
			*sign *= -1;
		(*string)++;
	}
}

int	overflow_check(int sign, long tmp, long ans)
{
	long	mx;
	long	mn;

	mx = LONG_MAX;
	mn = LONG_MIN;
	if (sign > 0)
	{
		if (mx / 10 < ans || ((mx / 10 == ans) && (mx % 10 < tmp)))
			return (1);
	}
	else
	{
		if (mn / -10 < ans || ((mn / -10 == ans) && (mn % -10 * -1 < tmp)))
			return (-1);
	}
	return (0);
}

int	ft_atoi(const char *string)
{
	int		sign;
	long	tmp;
	long	ans;

	sign = 1;
	tmp = 0;
	ans = 0;
	ft_check(&string, &sign);
	while (*string && ft_isdigit(*string))
	{
		tmp = *string - '0';
		if (overflow_check(sign, tmp, ans) == 1)
			return ((int)LONG_MAX);
		if (overflow_check(sign, tmp, ans) == -1)
			return ((int)LONG_MIN);
		ans = ans * 10 + tmp;
		string++;
	}
	return ((int)sign * ans);
}
/*
int	main(int ac,char *av[])
{
	char	*ft_atoi_test;
	char	*atoi_test;

	if(ac > 1)
	{
		ft_atoi_test = av[1];
		atoi_test = av[1];
		printf("ft_atoi : %d\n" , ft_atoi(ft_atoi_test));
		printf("atoi    : %d\n" , atoi(atoi_test));
	}
	return (0);
}
*/
