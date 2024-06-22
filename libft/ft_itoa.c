/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:01:05 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:43:40 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	num_len(int num)
{
	int	len;

	len = 0;
	if (num < 1)
		len++;
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static long long	abs_val(long long n)
{
	long long	nb;

	nb = 1;
	if (n < 0)
		nb *= -n;
	else
		nb *= n;
	return (nb);
}

static char	*str_new(size_t n)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n + 1));
	if (!str)
		return (NULL);
	return (str);
}

char	*ft_itoa(int n)
{
	unsigned int	num;
	int						sign;
	int						len;
	char					*str;

	sign = 0;
	if (n < 0)
		sign = 1;
	len = num_len(n);
	str = str_new(len);
	if (!str)
		return (NULL);
	*(str + len) = '\0';
	num = abs_val(n);
	while (len--)
	{
		*(str + len) = 48 + nbr % 10;
		nbr /= 10;
	}
	if (sign)
		*(str) = 45;
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
