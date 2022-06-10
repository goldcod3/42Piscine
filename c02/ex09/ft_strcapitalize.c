/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:19:00 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/25 11:30:35 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_symbol(char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		result = 0;
	else if (c >= 48 && c <= 57)
		result = 0;
	else
		result = 1;
	return (result);
}

char	ft_char_to_upcase(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

void	ft_str_to_lowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_str_to_lowcase(str);
	str[0] = ft_char_to_upcase(str[0]);
	while (str[i] != '\0')
	{
		if (ft_is_symbol(str[i]) == 1)
			str[i + 1] = ft_char_to_upcase(str[i + 1]);
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char a[] = "salUt, commEnt tu vAs ? 42mots quar.0nte-deux; cinqUante+et+un";
	printf("Origin: %s\n", a); 
	printf("Result: %s\n", ft_strcapitalize(a)); 
}
*/
