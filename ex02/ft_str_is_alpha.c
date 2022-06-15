/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 16:01:47 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 18:50:49 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'A' || str[i] > 'Z') && (str[i] < 'a' || str[i] > 'z'))
			return (0);
		i++;
	}	
	return (1);
}
/*#include <stdio.h>

int main(void)
{
    int test;

    test = ft_str_is_alpha("test"); //min
    printf("%d\n", test);
    test = ft_str_is_alpha("TEST"); //MAJ
    printf("%d\n", test);
    test = ft_str_is_alpha("test1234"); //char+int
    printf("%d\n", test);
    test = ft_str_is_alpha("1234"); // int
    printf("%d\n", test);
    test = ft_str_is_alpha(""); // NULL
    printf("%d\n", test);
    return 0;
}*/
