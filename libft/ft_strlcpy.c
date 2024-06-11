/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 14:01:56 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 15:11:12 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t strlcpy(char *dest,const char *src, size_t n)
{
	size_t	i;
	size_t src_len;
	
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
