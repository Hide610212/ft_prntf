#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    void *a = NULL;
    void *b = NULL;

    int std_ret = printf("STD: [%p] [%p]\n", a, b);
    int ft_ret  = ft_printf("FT : [%p] [%p]\n", a, b);

    printf("STD returned: %d\n", std_ret);
    printf("FT  returned: %d\n", ft_ret);
    return 0;
}

