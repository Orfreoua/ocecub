/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strleen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ojauregu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 13:13:15 by ojauregu          #+#    #+#             */
/*   Updated: 2023/09/26 13:13:24 by ojauregu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../headers/libft.h"

int	ft_strleen(char *str)
{
	int	len;

	len = 0;
	while (str && str[len])
		len++;
	return (len);
}
