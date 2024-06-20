/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:01:56 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:01:10 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = 0;
	while (n - 1 > i && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}

/*int main(void)
{
	char dest1[20];
	const char *src1;
	size_t i;

	src1 = "I truly love Kanye West.";	
	i = 5;
	printf("String before: %s\n", src1);
	ft_strlcpy(dest1, src1, i);
	printf("String after: %s\n", dest1);
	return (0);
}*/
