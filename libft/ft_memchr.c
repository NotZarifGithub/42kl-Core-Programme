/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:02:25 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 15:30:57 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *str, int cl, size_t n)
{
	unsigned char	*str_ptr;
	int				i;

	str_ptr = (unsigned char *)str;
	i = 0;
	while (n > i)
	{
		if (str_ptr[i] == (unsigned char)c)
			return (&str_ptr[i]);
		i++;
	}
	return (NULL);
}
