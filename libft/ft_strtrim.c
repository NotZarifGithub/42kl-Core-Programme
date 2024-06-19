/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 12:31:19 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/19 17:54:53 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*trimmed_str;
	int		start;
	int		end;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (start <= end && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (start <= end && ft_strchr(set, s1[end]) != NULL)
		end--;
	trimmed_str = malloc((end - start + 2) * sizeof(char));
	if (trimmed_str == NULL)
		return (NULL);
	ft_strlcpy(trimmed_str, s1 + start, end - start + 2);
	return (trimmed_str);
}

/*int main(void)
{
	const char *str1;
	const char *set;
	char *trimmed_str;

	str1 = "!!!I love Kanye West!!!!";
	set = "!";
	trimmed_str = ft_strtrim(str1, set);
	printf("String: %s\n", str1);
	printf("Trimmed string: %s\n", trimmed_str);
	return (0);	
}*/
