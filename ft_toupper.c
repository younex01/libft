/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:24:47 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/09 12:50:09 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	toupper_l(int c)
{
	if (c <= 122 && c >= 97)
		c -= 32;
	return (c);
}