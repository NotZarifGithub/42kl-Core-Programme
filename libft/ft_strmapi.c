/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:55:17 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:42:09 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = ft_strlen(s);
	str = malloc((len + 1) * sizeof(char));
	while (len > i)
	{
		str[i] = f(i, str[i]);
		i++;
	}
	str[len] = '\0';
	return (str);
}
