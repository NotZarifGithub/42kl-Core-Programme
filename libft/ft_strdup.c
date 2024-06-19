/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:53:33 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/19 15:28:49 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup(const char *str)
{
	size_t	len;
	char	*dup;

	len = ft_strlen(str);
	dup = malloc(len + 1);
	if (dup == NULL)
		return (NULL);
	ft_memcpy(dup, str, len + 1);
	return (dup);
}

/*int main(void)
{
	const char *str1;
	char *dup;

	str1 = "I love Kanye West.";
	dup = ft_strdup(str1);
	printf("%s: %p\n", str1, (void *)str1);
	printf("%s: %p\n", dup, (void *)dup);
	return (0);
}*/
