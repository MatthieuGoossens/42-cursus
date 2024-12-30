/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 18:24:32 by magoosse          #+#    #+#             */
/*   Updated: 2024/12/27 18:26:41 by magoosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
int main(int ac, char **av)
{
	int i = 125;
	unsigned int j = 165498798;
	char *str;
	str = "Hello";
	ft_printf("Bonjour, comment allez vous ? %d %x %p", i, j, str);
}
