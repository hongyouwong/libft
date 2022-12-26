/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:36:24 by hwong             #+#    #+#             */
/*   Updated: 2022/10/07 17:57:26 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *str, unsigned int start, size_t len)
{
	char	*output;
	size_t	i;

	i = 0;
	output = (char *) malloc (sizeof(char) * (len + 1));
	if (!output)
		return (NULL);
	str += start;
	while (i < len)
	{
		output[i] = str[i];
		i++;
	}
	output[i] = '\0';
	return (output);
}
