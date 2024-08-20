/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabd-ram <mabd-ram@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 22:14:52 by mabd-ram          #+#    #+#             */
/*   Updated: 2024/08/16 22:14:53 by mabd-ram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

int		print_char(int c);
int		print_str(char *str);
int		print_char(int c);
int		print_ptr(unsigned long long ptr);
int		print_int(int n);
int		print_uint(unsigned int n);
int		print_hex(unsigned int num, const char format);
int		print_percent(void);
int		formats(va_list args, const char format);
int		ft_printf(const char *format, ...);

int		ptr_len(uintptr_t num);
void	put_ptr(uintptr_t num);
int		num_len(unsigned int n);
char	*ft_uitoa(unsigned int n);
int		hex_len(unsigned int num);
void	put_hex(unsigned int num, const char format);

#endif // !FT_PRINTF_H
