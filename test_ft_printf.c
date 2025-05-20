#include <stdio.h>
#include "ft_printf.h"

void test_ft_printf()
{
    int ret1, ret2;

    printf("==== Starting ft_printf Tests ====\n");

    // Test 1: Single character (%c)
    ret1 = printf("Expected: %c\n", 'A');
    ret2 = ft_printf("Actual  : %c\n", 'A');
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 2: String (%s)
    ret1 = printf("Expected: %s\n", "Hello, World!");
    ret2 = ft_printf("Actual  : %s\n", "Hello, World!");
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 3: NULL string
    // ret1 = printf("Expected: %s\n", NULL);
    // ret2 = ft_printf("Actual  : %s\n", NULL);
    // printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 4: Pointer (%p)
    int x = 42;
    ret1 = printf("Expected: %p\n", &x);
    ret2 = ft_printf("Actual  : %p\n", &x);
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 5: Decimal (%d and %i)
    ret1 = printf("Expected: %d %i\n", -123, 456);
    ret2 = ft_printf("Actual  : %d %i\n", -123, 456);
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 6: Unsigned integer (%u)
    ret1 = printf("Expected: %u\n", 1234567890u);
    ret2 = ft_printf("Actual  : %u\n", 1234567890u);
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 7: Hexadecimal (%x and %X)
    ret1 = printf("Expected: %x %X\n", 0xabcdef, 0xABCDEF);
    ret2 = ft_printf("Actual  : %x %X\n", 0xabcdef, 0xABCDEF);
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 8: Percent sign (%%)
    ret1 = printf("Expected: %%\n");
    ret2 = ft_printf("Actual  : %%\n");
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    // Test 9: Complex format
    ret1 = printf("Expected: Char: %c, String: %s, Int: %d, Hex: %x\n", 'B', "Test", 123, 0x45);
    ret2 = ft_printf("Actual  : Char: %c, String: %s, Int: %d, Hex: %x\n", 'B', "Test", 123, 0x45);
    printf("Return values: expected = %d, actual = %d\n\n", ret1, ret2);

    printf("==== Tests Completed ====\n");
}

int main()
{
    test_ft_printf();
    return 0;
}
