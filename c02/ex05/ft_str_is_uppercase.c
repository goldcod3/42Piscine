/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 21:00:46 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/23 21:01:00 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

	i = ft_str_is_uppercase(a);
	printf("Result: %d\n", i); 
}
*/
