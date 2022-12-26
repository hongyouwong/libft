/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:49:10 by hwong             #+#    #+#             */
/*   Updated: 2022/10/03 11:49:10 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*point_dst;
	unsigned char	*point_src;

	point_dst = (unsigned char *)dst;
	point_src = (unsigned char *)src;
	if (!dst && !src)
		return (dst);
	if (dst < src)
		ft_memcpy(dst, src, n);
	else
	{
		point_dst += n;
		point_src += n;
		while (n-- > 0)
			*(--point_dst) = *(--point_src);
	}
	return (dst);
}
