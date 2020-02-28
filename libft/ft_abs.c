/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindhol <mlindhol@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 08:34:42 by mlindhol          #+#    #+#             */
/*   Updated: 2020/01/13 16:41:48 by mlindhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

long long		ft_abs(long long n)
{
	long long		nb;

	nb = (n >= 0) ? n : -n;
	return (nb);
}
