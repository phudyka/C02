/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phudyka <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:39:33 by phudyka           #+#    #+#             */
/*   Updated: 2022/02/12 17:19:41 by phudyka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include<string.h>
#include<stdio.h>
 int main(void)
{
	char	dest[] = "Carjack";
	char	src[] = "Chirac";

	printf("%s\n", ft_strncpy(dest, src, 6));
	printf("%s", strncpy(dest, src, 6));
	return 0;
}*/
