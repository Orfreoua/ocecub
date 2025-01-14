/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   space.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 18:01:30 by ojauregu          #+#    #+#             */
/*   Updated: 2023/03/14 18:01:34 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "headers.h"

int	space(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] != ' ')
			return (1);
		x++;
	}
	return (-1);
}
