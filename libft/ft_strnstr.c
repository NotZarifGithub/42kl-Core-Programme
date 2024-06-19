/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:42:53 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/19 14:08:46 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strnstr(const char *hay, const char *needle, size_t n)
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
			return ((char *)(&hay[i]));
		i++;
	}
	return (NULL);
}

/*int main(void)
{
	const char *hay1;
	const char *needle1;
	size_t len;
	char *result1;

	hay1 = "I love Kanye West.";
	needle1 = "Kanye";
	len = strlen(hay1);
	result1 = ft_strnstr(hay1, needle1, len);
	if (result1 != NULL)
		printf("Needle found: %s\n", result1);
	return (0);
}*/
