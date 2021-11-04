#include <stddef.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_strings(", ", 2, "Jay", "Django");
    print_strings("", 2, "Jay", "Django");
    print_strings(NULL, 2, "Jay", "Django");
    print_strings(", ", 0, "Jay", "Django");
    print_strings(", ", 4, "Jay", "Django", NULL, "");
    return (0);
}
