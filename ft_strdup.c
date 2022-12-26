/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:30:43 by hwong             #+#    #+#             */
/*   Updated: 2022/10/07 17:57:04 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*dst;
	size_t	size;

	size = ft_strlen(str);
	dst = (char *) malloc (sizeof(char) * (size + 1));
	if (!dst)
		return (NULL);
	ft_memcpy(dst, str, size);
	return (dst);
}
