/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:48:56 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/05 17:03:23 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*int main(void)
{
	const char *str;
	int len;
	
	str = "I love Kanye West.";
	len =	ft_strlen(str);
	printf("The length of the string %s is %d", str, len);
	return (0);
}*/
