/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:58:40 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/20 15:16:49 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
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
