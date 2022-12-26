/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwong <hwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:00:54 by hwong             #+#    #+#             */
/*   Updated: 2022/10/07 17:57:16 by hwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_char(int n)
{
	int	count;

	count = 0;
	if (n < 0)
	{
		n = -n;
		count++;
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*output;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	i = count_char(n);
	output = (char *) malloc (sizeof(char) * (i + 1));
	if (!output)
		return (NULL);
	output[i--] = '\0';
	if (n < 0)
	{
		output[0] = '-';
		n = -n;
	}
	while (n != 0)
	{
		output[i--] = 48 + (n % 10);
		n /= 10;
	}
	return (output);
}

/*
#include <stdio.h>
int main(int argc, char **argv)
{
	(void) argc;
	//(void) argv;
	printf("%s\n", ft_itoa(ft_atoi(argv[1])));
	return (0);
}
*/