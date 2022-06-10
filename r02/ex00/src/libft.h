/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgomes-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 23:21:19 by lgomes-o          #+#    #+#             */
/*   Updated: 2022/05/29 23:23:50 by lgomes-o         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIB_
#define _LIB_
#include "./ft_puterror.c"
#include "./ft_putstr.c"
#include "./ft_atoi.c"
#include "./ft_verify_num.c"
#include "./ft_convert_num.c"

void	ft_puterror(void);
void	ft_putstr(char *str);
int		ft_atoi(char *str);
int		ft_verify_num(char *num);
void	ft_convert_num(int num);

#endif //_LIB_
