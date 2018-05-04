/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setyellow.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbelalou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 17:57:44 by mbelalou          #+#    #+#             */
/*   Updated: 2018/05/03 16:34:58 by mbelalou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../inc/color.h"

void	ft_setyellow(void)
{
	char	*str;
	int		pt;

	pt = -1;
	str = "\x1B[33m";
	while (str[++pt])
		ft_put_buf(str[pt], ING);
}
