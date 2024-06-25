/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:11 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/26 01:00:59 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	srcsize;
	size_t	destsize;

	if ((!dest || !src) && !n)
		return (0);
	srcsize = ft_strlen(src);
	destsize = ft_strlen(dest);
	if (n < destsize)
		return (srcsize + n);
	else
	{
		dest = dest + destsize;
		ft_strlcpy(dest, src, n - destsize);
		return (srcsize + destsize);
	}
}

/*int main(void)
{
	char dest1[20] = "I love Kanye West.";
	const char *src1;
	size_t n;

	src1 = "I truly do.";
	n = 30;
	printf("String before: %s\n", dest1);
	ft_strlcat(dest1, src1, n);
	printf("String after: %s\n", dest1);
	return (0);
}*/
