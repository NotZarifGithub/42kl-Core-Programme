/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 14:39:08 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/05 14:55:32 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

int main(void)
{
	int digit;

	digit = '1';
	if (ft_isdigit(digit))
	{
		printf("%c is a digit.", digit);
	}
	else
	{
		printf("%c is not a digit.", digit);
	}
	return (0);
}
