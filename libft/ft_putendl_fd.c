/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 15:50:23 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/13 16:02:15 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putendl_fd(char *s, int fd)
{
	size_t len;
	size_t i;

	len = ft_strlen(s);
	i = 0;
	while (len > i)
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
