/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 14:04:30 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/29 14:50:03 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n > 0)
	{	
		while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
		{	
			if (s1[i] > s2[i])
				return (1);
			else if (s1[i] < s2[i])
				return (-1);
			i++;
		}
	}
	return (0);
}
/*
int	main(void)
{
	char a[] = "Hola como estas";
	char b[] = "Hol4 comDaniel";

	printf("S1: %s\n", a);
	printf("s2: %s\n", b);

	printf("Result: %d\n", ft_strncmp(a, b, 4));
}
*/
