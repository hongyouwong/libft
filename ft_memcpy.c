/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2022/10/03 11:49:15 by hwong             #+#    #+#             */
/*   Updated: 2022/10/03 11:49:15 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr_dst;
	unsigned char	*ptr_src;

	if (!dst || !src)
		return (0);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (unsigned char *)src;
	while (n-- > 0)
		*(ptr_dst++) = *(ptr_src++);
	return (dst);
}
