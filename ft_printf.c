#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
   va_list args;
   int  i;
   int count;

   i = 0;
   count = 0;
   va_start(args, format);
   while(format[i])
   {
        if(format[i] == '%' && format[i + 1] != '\0')
            {
                count += handle_conversion(format[i + 1], args);
                i++;
            }
        else
            count += ft_putchar(format[i]);
        i++;
   }
   va_end(args);
   return count;
}