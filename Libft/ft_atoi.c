/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 20:30:03 by magoosse          #+#    #+#             */
/*   Updated: 2024/11/03 01:13:39 by magoosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	neg;
	long	buffer;
	long	result;

	i = 0;
	neg = 1;
	result = 0;
	buffer = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		result = (result * 10) + (str[i++] - '0');
		if (buffer > result && neg > 0)
			return (-1);
		buffer = result;
	}
	return (result * neg);
}
/*
int	main(void)
{
	char *a = " ";
	char *b = "\t\v\f\r\n \f-06050";
	char *c = "2147483647";
	char *d = "-2147483648";
	char *e = "9223372036854775807";
	char *f = "-9223372036854775807";
	char *s = "   -2147483652";
	char *t = "+2147483647";
	int g = atoi(a);
	int h = atoi(b);
	int i = atoi(c);
	int j = atoi(d);
	int k = atoi(e);
	int l = atoi(f);
	int u = atoi(s);
	int w = atoi(t);

	int m = ft_atoi(a);
	int n = ft_atoi(b);
	int o = ft_atoi(c);
	int p = ft_atoi(d);
	int q = ft_atoi(e);
	int r = ft_atoi(f);
	int v = ft_atoi(s);
	int x = ft_atoi(t);

	printf("Atoi : %d\n", g);
	printf("Ft   : %d\n", m);
	printf("Atoi : %d\n", h);
	printf("Ft   : %d\n", n);
	printf("Atoi : %d\n", i);
	printf("Ft   : %d\n", o);
	printf("Atoi : %d\n", j);
	printf("Ft   : %d\n", p);
	printf("Atoi : %d\n", k);
	printf("Ft   : %d\n", q);
	printf("Atoi : %d\n", l);
	printf("Ft   : %d\n", r);
	printf("Atoi : %d\n", u);
	printf("Ft   : %d\n", v);
	printf("Atoi : %d\n", w);
	printf("Ft   : %d\n", x);
}*/
