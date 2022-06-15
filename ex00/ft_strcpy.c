/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 11:07:08 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 17:21:53 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{	
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include <stdio.h>
#include <string.h>

int	main(void)
{	
	char	phrase1[] = "La lettre apres 'P' c'est Q";
	char	phrase2[] = "Je suis a l'arret de mont";


	printf("%s\n", ft_strcpy(phrase1, phrase2));
	printf("%s", strcpy(phrase1, phrase2));
	return 0;
}*/
