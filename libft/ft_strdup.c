/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:53:33 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/12 16:16:54 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;

	len = strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	memcpy(dup, str, len + 1);
	return (dup);
}
