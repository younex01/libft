/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 18:49:29 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/01 19:17:52 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90 ) || (c >= 97 && c <= 122 ))
		return (1);
	else
		return (0);
}