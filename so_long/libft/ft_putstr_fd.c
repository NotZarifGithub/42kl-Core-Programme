/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:24:25 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 19:18:18 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	len;
	size_t	i;

	if (!s)
		return ;
	if (fd < 0)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (len > i)
	{
		write(fd, &s[i], 1);
		i++;
	}
}
