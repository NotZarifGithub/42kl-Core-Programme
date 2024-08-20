/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:13:30 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/08/16 22:13:31 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"
#include "../includes/ft_printf.h"

int	ptr_len(uintptr_t num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num = num / 16;
		len++;
	}
	return (len);
}

void	put_ptr(uintptr_t num)
{
	if (num >= 16)
	{
		put_ptr(num / 16);
		put_ptr(num % 16);
	}
	else if (num < 10)
		ft_putchar_fd((num + '0'), 1);
	else
		ft_putchar_fd((num - 10 + 'a'), 1);
}

int	print_ptr(unsigned long long ptr)
{
	int	print_len;

	print_len = 2;
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	if (ptr == 0)
	{
		ft_putchar_fd('0', 1);
		return (3);
	}
	else
	{
		put_ptr(ptr);
		print_len += ptr_len(ptr);
	}
	return (print_len);
}

/*
int main()
{
  unsigned long long ptr;
  int print;

  ptr = 0x7ffc9f5e970c;
  print = print_ptr(ptr);
  write(1, "\n", 1);
  return (0);
}
*/
