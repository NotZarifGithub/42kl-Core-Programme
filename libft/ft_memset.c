/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:03:12 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 15:42:50 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, size_t len)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (str);
}
