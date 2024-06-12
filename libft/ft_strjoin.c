/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 18:27:33 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/12 19:13:13 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	s1_len;	
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	if (!s1 || !s2)
		return (NULL);
	str = malloc(s1_len + s2_len + 1);
	if (!str)
		return (NULL);
	strlcpy(str, s1, s1_len + 1);
	strlcat(str, s2, s1_len + s2_len + 1);
	return (str);
}
