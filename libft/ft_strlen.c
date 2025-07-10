/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohdahma <mohdahma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:56:54 by mohdahma          #+#    #+#             */
/*   Updated: 2024/10/28 10:56:54 by mohdahma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	if (!str || !str[0])
		return (0); // Handle NULL pointer case
	size_t	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
