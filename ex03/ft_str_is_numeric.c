/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:50:10 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/10 16:27:41 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
    int test;

    test = ft_str_is_numeric("test"); //min
    printf("%d\n", test);
    test = ft_str_is_numeric("TEST"); //MAJ
    printf("%d\n", test);
    test = ft_str_is_numeric("test1234"); //char+int
    printf("%d\n", test);
    test = ft_str_is_numeric("1234"); // int
    printf("%d\n", test);
    test = ft_str_is_numeric(""); // NULL
    printf("%d\n", test);
    return 0;
}*/
