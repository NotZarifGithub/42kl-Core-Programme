/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 17:47:18 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/05 18:05:16 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_toupper(char l)
{
	if (l >= 'a' && l <= 'z')
		l -= 32;
	return ((char)(l));
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
