/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:19:06 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/10 16:28:21 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>

int main(void)
{
    int test;

    test = ft_str_is_lowercase("test"); //min
    printf("%d\n", test);
    test = ft_str_is_lowercase("TEST"); //MAJ
    printf("%d\n", test);
    test = ft_str_is_lowercase("test1234"); //char+int
    printf("%d\n", test);
    test = ft_str_is_lowercase("1234"); // int
    printf("%d\n", test);
    test = ft_str_is_lowercase(""); // NULL
    printf("%d\n", test);
    return 0;
}*/
