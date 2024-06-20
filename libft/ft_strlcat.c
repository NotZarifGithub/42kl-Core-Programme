/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:11 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 17:12:36 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	src_len;

	if (dest == NULL || src == NULL)
		return (0);
	len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (n <= len)
		return (len + src_len);
	i = 0;
	while (i < n - len - 1 && i < src_len)
	{
		dest[len + i] = src[i];
		i++;
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
