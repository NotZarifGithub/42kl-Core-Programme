/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:47:18 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 16:41:29 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

/*int main(void)
{
	char char_before;
	char char_after;

	char_before = 'a';
	char_after = ft_toupper(char_before);
	printf("Before: %c , After: %c", char_before, char_after);
	return (0);
}*/
