/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:42:53 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/06 17:04:12 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(const char *hay, const char *needle, size_t n)
{
	int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)(hay));
	while (hay[i] != '\0' && i != n)
	{
		j = 0;
		while (hay[i + j] == needle[j] && needle[j] != '\0')
			j++;
		if (needle[j] == '\0')
			return ((char *)(&hay[i - j]));
		i++;
	}
	return (NULL);
}
