/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:04:34 by hwong             #+#    #+#             */
/*   Updated: 2022/10/07 17:57:23 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char			*output;
	unsigned int	i;

	i = 0;
	output = (char *) malloc (sizeof(char) * (ft_strlen(s) + 1));
	if (!output)
		return (NULL);
	while (s[i])
	{
		output[i] = (*f)(i, s[i]);
		i++;
	}
	return (output);
}
