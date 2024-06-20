/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:06:57 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:08:07 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return ((char)(c));
}

/*int main(void)
{
	char char_before, char_after;

	char_before = 'P';
	char_after = ft_tolower(char_before);
	printf("Before: %c , After: %c", char_before, char_after);
	return (0);
}*/
