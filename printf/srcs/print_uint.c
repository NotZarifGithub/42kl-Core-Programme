/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_uint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:13:44 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/08/16 22:13:45 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/libft.h"

int num_len(unsigned int n)
{
  int len;

  len = 0;
  while (n != 0)
  {
    len++;
    n = n / 10;
  }
  return (len);
}

char *ft_uitoa(unsigned int n)
{
  int len;
  char *num;

  len = num_len(n);
  num = (char *)malloc(sizeof(char) *(len + 1));
  if (!num)
  {
    return (0);
  }
  num[len] = '\0';
  while (n != 0)
  {
    num[len - 1] = n % 10 + 48;
    n = n / 10;
    len--;
  }
  return (num);
}

int print_uint(unsigned int n)
{
  int print_len;
  char *num;

  print_len = 0;
  if (n == 0)
    print_len += write(1, "0", 1);
  else
  {
    num = ft_uitoa(n);
    print_len += ft_printstr(num);
    free(num);
  }
  return (print_len);
}
