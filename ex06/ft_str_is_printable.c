/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:58:38 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 19:21:39 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
    int test;

    test = ft_str_is_printable("test"); //min
    printf("%d\n", test);
    test = ft_str_is_printable("TEST"); //MAJ
    printf("%d\n", test);
    test = ft_str_is_printable("test1234"); //char+int
    printf("%d\n", test);
    test = ft_str_is_printable("1234"); // int
    printf("%d\n", test);
	test = ft_str_is_printable("~"); //non printable 
	printf("%d\n", test);
    test = ft_str_is_printable(""); // NULL
    printf("%d\n", test);
    return 0;
}*/
