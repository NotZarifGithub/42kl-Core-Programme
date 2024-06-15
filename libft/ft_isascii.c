/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:10:19 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/05 16:20:35 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

int main(void)
{
	char ascii;

	ascii = 'K';
	if (ft_isascii(ascii))
	{
		printf("%c is an ascii character.", ascii);
	}
	else
	{
		printf("%c is not an ascii character.", ascii);
	}
	return (0);
}
