/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:48:11 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 16:39:28 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len;
	size_t	remaining;

	i = 0;
	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
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
