/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:22:57 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/05 16:47:18 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}

/*int main(void)
{
	char printable;

	printable = 'k';
	if (ft_isprint(printable))
	{
		printf("%c is a printable character.", printable);
	}
	else
	{
		printf("%c is not a printable character.", printable);
	}
	return (0);
}*/
