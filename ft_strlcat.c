/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:47:37 by hwong             #+#    #+#             */
/*   Updated: 2022/10/03 11:47:37 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	if (!dst || !src)
		return (0);
	len_dst = 0;
	len_src = 0;
	i = 0;
	while (dst[len_dst])
		len_dst++;
	while (src[len_src])
		len_src++;
	if (len_dst > size)
		return (size + len_src);
	while (src[i++] && len_dst + i < size - 1)
		dst[len_dst + i] = src[i];
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}
