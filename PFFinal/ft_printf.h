/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 17:30:41 by magoosse          #+#    #+#             */
/*   Updated: 2024/12/27 17:34:05 by magoosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h> //va_list
# include <unistd.h> //write
# include <stdlib.h> //malloc && free
# include <limits.h> //LONG_MIN
# define HEX_LOW_BASE "0123456789abcdef"
# define HEX_UPP_BASE "0123456789ABCDEF"

// Ft_printf
int		ft_printf(const char *str, ...);
void	ft_format(va_list ptr, char *str, size_t *count);

// Libft
void	ft_putchar(char n, size_t *count);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char *str, size_t *count);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n, size_t *count);
void	ft_putuns(unsigned int n, size_t *count);
void	ft_printhex(unsigned long long n, size_t *count, char *base);
size_t	ft_strlen(const char *s);
int		ft_hexlen(unsigned long n);
void	ft_putptr(unsigned long ptr, size_t *count);

#endif
