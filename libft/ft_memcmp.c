/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:05:58 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 14:00:59 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*str1_ptr = (const unsigned char *)str1;
	const unsigned char	*str2_ptr = (const unsigned char *)str2;
	size_t				i;

	i = 0;
	while (n > i)
	{
		if (str1_ptr[i] != str2_ptr[i])
			return ((int)(str1_ptr[i] - str2_ptr[i]));
		i++;
	}
}
