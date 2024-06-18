/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:06:57 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/05 18:19:42 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_tolower(char l)
{
	if (l >= 'A' && l <= 'Z')
		l += 32;
	return ((char)(l));
}

/*int main(void)
{
	char char_before, char_after;

	char_before = 'P';
	char_after = ft_tolower(char_before);
	printf("Before: %c , After: %c", char_before, char_after);
	return (0);
}*/
