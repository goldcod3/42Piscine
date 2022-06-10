/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 20:08:31 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/25 09:41:29 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			result = 1;
		else
		{	
			result = 0;
			break ;
		}	
		i++;
	}	
	if (str[0] == '\0')
		result = 1;
	return (result);
}	
/*
int	main(void)
{
	char a[] = "";
	int i = 0;

	i = ft_str_is_lowercase(a);
	printf("Result: %d\n", i); 
}
*/
