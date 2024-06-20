/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:01:05 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:07:13 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_intlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		n = -n;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		i;

	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	else
	{
		len = -1;
		if (n < 0)
		{
			str[0] = '-';
			n = -n;
		}
		while (n != 0)
		{
			str[i--] = (n % 10) + '0';
			n /= 10;
		}
	}
	return (str);
}

/*int main()
{
    int num1 = 123;
    int num2 = -456;
    int num3 = 0;

    char *str1 = ft_itoa(num1);
    char *str2 = ft_itoa(num2);
    char *str3 = ft_itoa(num3);

    printf("num1: %d -> %s\n", num1, str1);
    printf("num2: %d -> %s\n", num2, str2);
    printf("num3: %d -> %s\n", num3, str3);

    free(str1);
    free(str2);
    free(str3);

    return 0;
}*/
