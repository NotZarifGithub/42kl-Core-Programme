/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 12:30:34 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/06 14:23:26 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*strrchr(const char *str, int c)
{
	int	i;

	i = strlen(str);
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)(&str[i]));
		i--;
	}
	return (NULL);
}
