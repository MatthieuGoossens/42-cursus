/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:25:36 by magoosse          #+#    #+#             */
/*   Updated: 2024/12/15 15:56:15 by magoosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 700000
# endif

# if BUFFER_SIZE>8000000
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 1000000
# endif

# include <stdlib.h> //malloc free
# include <unistd.h> //read
# include <fcntl.h>  //open
# include <stdio.h>  //printf
# include <stdint.h> //SIZE_MAX
// GNL
char	*devers(char *stash, char *filled);
char	*fill_stash(int fd, char *stash);
char	*fill_line(char *stash);
char	*cut_stash(char *stash, char *line);
char	*get_next_line(int fd);
// Utils
void	ft_free(void *str);
int		is_line(char *str);
int		ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
void	*ft_calloc(size_t count, size_t size);

#endif
