/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:02:36 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/06/11 15:37:07 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	size_t			i;

	dest_ptr = (char *)dest;
	src_ptr = (const char *)src;
	i = 0;
	while (n > i)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
	}
	return (dest);
}

int main(void)
{
	char dest1[] = "";
	char src1[] = "I love Kanye West.";
	int len;

	ft_memcpy(dest1, src1, len);
	dest1[len] = '\0';
	printf("%s", dest1);
	return (0);
}
