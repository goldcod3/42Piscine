/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:01:08 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/29 14:50:38 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	idest;
	int	i;

	idest = ft_strlen(dest);
	i = 0;
	if (src[i] != '\0')
	{	
		while (src[i] != '\0')
		{	
			dest[idest] = src[i];
			i++;
			idest++;
		}
		dest[idest] = '\0';
	}
	return (dest);
}
/*
int	main(void)
{
	char a[] = "Hola";
	char b[] = " como estas?";


	printf("Src: %s\n", b);
	printf("Dest: %s\n", a);
	printf("Result: %s\n", ft_strcat(a, b));

}
*/
