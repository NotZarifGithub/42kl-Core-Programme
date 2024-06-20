/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:11 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 13:59:26 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	remaining;

	i = 0;
	len = ft_strlen(dest);
	remaining = n - len - 1;
	while (remaining > 0 && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
		remaining--;
	}
	dest[len + i] = '\0';
	return (len + i);
}

/*int main(void)
{
	char dest1[20] = "I love Kanye West.";
	const char *src1;
	size_t n;

	src1 = "I truly do.";
	n = 5;
	printf("String before: %s\n", dest1);
	ft_strlcat(dest1, src1, n);
	printf("String after: %s\n", dest1);
	return (0);
}*/
