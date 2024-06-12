/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:15:58 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/12 18:34:57 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substring;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		len = 0;
	substring = malloc(len + 1);
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	memcpy(substring, s + start, len);
	substring[len] = '\0';
	return (substring);
}
