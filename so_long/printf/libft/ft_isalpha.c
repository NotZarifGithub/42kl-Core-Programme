/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:33:27 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:09:33 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}

/*int main(void)
{
	char alphabet;
	
	alphabet = 'K';
	if (ft_isalpha(alphabet))
	{
		printf("%c is an alphabet.", alphabet);
	}
	else
	{
		printf("%c is not an alphabet.", alphabet);
	}
	return (0);
}*/
