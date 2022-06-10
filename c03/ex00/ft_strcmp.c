/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:34:53 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/29 14:49:16 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0' && s2[i] != '\0'))
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char a[] = "Hola";
	char b[] = "Hola";
	
	char c[] = "HolA";
	char d[] = "Hola";

	char e[] = "Holaaaa";
	char f[] = "Hola";

	char g[] = "Hola";
	char h[] = "Holaaaa";

	printf("S1 == S2: %d\n", ft_strcmp(a, b));
	printf("S1 != S2: %d\n", ft_strcmp(c, d));	
	printf("S1 >  S2: %d\n", ft_strcmp(e, f));
	printf("S1 <  S2: %d\n", ft_strcmp(g, h));

}
*/
