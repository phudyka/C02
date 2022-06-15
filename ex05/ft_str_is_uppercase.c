/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:43:19 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/10 16:28:35 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
    int test;

    test = ft_str_is_uppercase("test"); //min
    printf("%d\n", test);
    test = ft_str_is_uppercase("TEST"); //MAJ
    printf("%d\n", test);
    test = ft_str_is_uppercase("test1234"); //char+int
    printf("%d\n", test);
    test = ft_str_is_uppercase("1234"); // int
    printf("%d\n", test);
    test = ft_str_is_uppercase(""); // NULL
    printf("%d\n", test);
    return 0;
}*/
