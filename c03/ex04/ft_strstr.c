/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 17:07:49 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/30 22:56:58 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{	
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
		{	
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}	
		i++;
		j = 0;
	}	
	return (0);
}
/*
int	main(void)
{
	char a[] = "Hola mundo";
    char b[] = "mu";

	printf("Result: %s\n", ft_strstr(a, b));
}
*/
