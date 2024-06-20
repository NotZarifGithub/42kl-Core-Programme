/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:58:40 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 14:08:19 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 91)
		|| (c > 97 && c < 123)
		|| (c > 47 && c < 58))
		return (1);
	return (0);
}

/*int main(void)
{
	char alphanum;
	
	alphanum = 'K';
	if (!ft_isalnum(alphanum))
		printf("%c is not an alphanumeric character.", alphanum);
	else
	{
	printf("%c is an alphanumeric character.", alphanum);
	}
	return (0);
}*/
