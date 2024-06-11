/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:02:36 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 15:37:07 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	int			i;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	i = 0;
	while (n > i)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}
