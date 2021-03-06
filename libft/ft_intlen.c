/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlindhol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 08:56:55 by mlindhol          #+#    #+#             */
/*   Updated: 2019/10/28 09:04:31 by mlindhol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_intlen(int n)
{
	int		i;

	if (n < 0)
		n *= -1;
	i = 0;
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	return (1 + i);
}
