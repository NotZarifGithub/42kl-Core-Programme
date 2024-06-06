/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 14:25:18 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/06 15:33:52 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(const char *str1, const char *str2, size_t n )
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i != n)
	{
		if (str1[i] > str2[i])
			return (str1[i] - str2[i]);
		else if (str2[i] > str1[i])
			return (str2[i] - str1[i]);
		i++;
	}
	return (0);
}
