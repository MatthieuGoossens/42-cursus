/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: magoosse <magoosse@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 16:52:03 by magoosse          #+#    #+#             */
/*   Updated: 2024/12/30 19:14:29 by magoosse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define KRED  "\x1B[31m"
#define KGRN  "\x1B[32m"
#define CYN   "\x1B[36m"
#define WHT   "\x1B[37m"

#include "ft_printf.h"

int	main(void)
{
	char	err[] = "00000000";
	int	correct = 1;
	char	chara = 'A';
	char	*str = "Bonjour, tout va bien !\\n\n";
	int		deci = 2147483;
	int		i = 2147483666;
	unsigned int	ui = -15648792165498548;
	int		hexl = -4245;
	int		hexU = -42456;
	// %%
	int		lu = 0;
	int		flu = 0;

	printf(" O-------------------------------------------------------------O\n");
	printf(" |                                                             |\n");
	printf(" |           "CYN"              TESTER PRINTF    "WHT"                   |\n");
	printf(" |                                                             |\n");
	printf(" O-------------------------------------------------------------O\n");
	printf(" |\n");

	printf(" |           "CYN"                TEST 1          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Single char           : %\n", chara);
	flu = ft_printf(" |  Single char           : %\n", chara);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[0] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 2          "WHT"                   \n");
	printf(" |                                                             \n");
	lu =printf(" |  String                : %s |\n", str);
	flu = ft_printf(" |  String                : %s |\n", str);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[1] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 3          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Void pointer          : %p\n", (void *)&err);
	flu = ft_printf(" |  Void pointer          : %p\n", (void *)&err);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[2] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 4          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Decimal b10           : %d\n", deci);
	flu = ft_printf(" |  Decimal b10           : %d\n", deci);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[3] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 5          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Integer b10           : %i\n", i);
	flu = ft_printf(" |  Integer b10           : %i\n", i);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[4] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 6          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Unsigned decimal b10  : %u\n", ui);
	flu = ft_printf(" |  Unsigned decimal b10  : %u\n", ui);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[5] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 7          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Hexa b16 lowercase    : %x\n", hexl);
	flu = ft_printf(" |  Hexa b16 lowercase    : %x\n", hexl);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[6] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 8          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Hexa b16 uppercase    : %X\n", hexU);
	flu = ft_printf(" |  Hexa b16 uppercase    : %X\n", hexU);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[7] = 1;
		correct = 0;
	}
	printf(" |           "CYN"                TEST 9          "WHT"                   \n");
	printf(" |                                                             \n");
	lu = printf(" |  Percentage sign       : %%\n");
	flu = ft_printf(" |  Percentage sign       : %%\n");
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |\n", (lu - flu));
		err[8] = 1;
		correct = 0;
	}
	printf(" O-----------------------------------------------------------O\n");
//
	printf(" |                                                           |\n");
	if (correct == 1)
		printf(" |   "KGRN"      Tout les tests sont passes avec succes!!!         "WHT"|\n");
	else
	{
		int	i = 0;
		while (err[i])
		{
			if (err[i] == 1)
				printf(" |"KRED"                Return du test %d incorrect!!!           "WHT"   |\n", i);
			i++;
		}
	}
	printf(" |                                                           |\n");
	printf(" O-----------------------------------------------------------O\n");
	printf(" |                                                           \n");
	printf(" |           "CYN"           TESTS AVANCES     "WHT"                   \n");
	printf(" |                                                             \n");
	str = NULL;
	lu =printf(" |  String                : %s |fin|\n", str);
	flu = ft_printf(" |  String                : %s |fin|\n", str);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[1] = 1;
		correct = 0;
	}
	lu = printf(" |  Printf(Printf(\" | 8888\\n\"))          : %d\n", printf(" | 8888\n"));
	flu = ft_printf(" |  Printf(Printf(\" | 8888\\n\"))          : %d\n", ft_printf(" | 8888\n"));
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[0] = 1;
		correct = 0;
	}
	printf(" |                                                             \n");
	lu = printf(" |  Printf(\"\"))                       : %d\n", printf(""));
	flu = ft_printf(" |  Printf(\"\"))                       : %d\n", ft_printf(""));
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[0] = 1;
		correct = 0;
	}
	printf(" |                                                             \n");
	lu = printf(" |  Printf(\"cspdiuxX%%\"))              : %c\n |  %s |\n |  %p\n |  %d\n |  %i\n |  %u\n |  %x\n |  %X\n |  %%\n |\n", chara, str, (void *)&str, deci, i, ui, hexl, hexU);
	flu = ft_printf(" |  Ft_Printf(\"cspdiuxX%%\"))           : %c\n |  %s |\n |  %p\n |  %d\n |  %i\n |  %u\n |  %x\n |  %X\n |  %%\n |\n", chara, str, (void *)&str, deci, i, ui, hexl, hexU);
	if (lu == flu)
		printf(" |   "KGRN"Return OK\n"WHT" |\n |--------\n");
	else
	{
		printf(" |  "KRED" Difference de : %d     --------------------------------!!!!"WHT" \n |\n |--------\n", (lu - flu));
		err[0] = 1;
		correct = 0;
	}
}
