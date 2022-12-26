/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:34:21 by hwong             #+#    #+#             */
/*   Updated: 2022/10/06 16:50:14 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*output;
	size_t	size;
	size_t	i;

	i = 0;
	size = ft_strlen(s1) + ft_strlen(s2);
	output = (char *) malloc (sizeof(char) * (size + 1));
	while (*s1)
		output[i++] = *(s1++);
	while (*s2)
		output[i++] = *(s2++);
	output[i] = '\0';
	return (output);
}
