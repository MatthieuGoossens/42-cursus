/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 15:52:39 by magoosse          #+#    #+#             */
/*   Updated: 2024/12/15 15:56:28 by magoosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	char	*line;

	line = NULL;
	fd = open("bible.txt", 'r');
	line = get_next_line(fd);
	printf("Line : |%s|\n", line);
	while (line != NULL)
	{
		line = get_next_line(fd);
		printf("Line : |%s|\n", line);
	}
}
