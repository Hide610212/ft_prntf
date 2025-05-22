#include "ft_printf.h"

int ft_putchar(char c)
{
   return write(1, &c, 1);
}

int ft_putstr(const char *str)
{
    int i;

    i = 0;
    if(!str)
        return ft_putstr("(null)");
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
    return i;
}

int ft_putnbr(int n)
{
    int count;

    count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return 11;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
        count++;
	}
	if (n >= 10)
		count += ft_putnbr(n / 10);
	count += ft_putchar( (n % 10) + '0');
    return count;
}

int ft_putnbr_unsigned(unsigned int n)
{
    int count;

    count = 0;
    if(n >= 10)
        count += ft_putnbr_unsigned(n / 10);
    count += ft_putchar((n % 10) + '0');
    return count;
}

int ft_puthex(unsigned int n, int uppercase)
{
    char *base;
    int count;

    if (n == 0)
        return ft_putchar('0');
    count = 0;
    if(uppercase)
        base = "0123456789ABCDEF";
    else
        base = "0123456789abcdef";
    if(n >= 16)
        count += ft_puthex(n / 16, uppercase);
    count += ft_putchar(base[n % 16]);
    return count;
}

int ft_numlen(unsigned long n, int base)
{
    int len;

    len = 1; 
    while (n >= (unsigned long)base)
    {
        n /= base;
        len++;
    }
    return len;
}

int ft_puthex_ulong(unsigned long n)
{
    char *base = "0123456789abcdef";
    int count = 0;

    if (n >= 16)
        count += ft_puthex_ulong(n / 16);
    count += ft_putchar(base[n % 16]);
    return count;
}

int ft_putptr(void *ptr)
{
    unsigned long addr;
    int count;

    addr = (unsigned long)ptr;
    count = 0;
    count += ft_putstr("0x");
    if(!addr)
        return count += ft_putchar('0');
    count += ft_puthex_ulong(addr);
    return count;
}
