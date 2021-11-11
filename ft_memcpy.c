/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelousse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:26:01 by yelousse          #+#    #+#             */
/*   Updated: 2021/11/07 13:49:59 by yelousse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dst,const void *src,size_t n)
{
	size_t	i;

	i = 0;
	while(i < n)
	{
		((char *)dst )[i] = ((char *)src )[i];
		i++;
	}
	((char *)dst )[i] = '\0';
	return (dst);
}