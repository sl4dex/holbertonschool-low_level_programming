#include <stdio.h>
#include "3-function_like_macro.h"
#include "3-function_like_macro.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, j ,k;

    i = ABS(-98) * 10;
    j = ABS(98) * 10;
    k = ABS(0);
    printf("%d, %d\n %d\n", i, j, k);
    return (0);
}
