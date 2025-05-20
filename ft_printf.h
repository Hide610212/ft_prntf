#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_putchar(char c);
int ft_putstr(const char *str);
int ft_putnbr(int n);
int ft_putnbr_unsigned(unsigned int n);
int ft_puthex(unsigned int n, int uppercase);
int ft_putptr(void *ptr);
int handle_conversion(char c, va_list args);
int ft_numlen(unsigned long n, int base);

#endif
