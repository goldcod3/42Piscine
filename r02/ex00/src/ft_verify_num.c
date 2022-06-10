/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verify_argv.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 17:10:34 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/29 23:20:28 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_verify_num(char *num)
{
	if (num != '\0')
	{
		if (ft_atoi(num) >= 0)
			return (ft_atoi(num));
	}
	return (0);
}