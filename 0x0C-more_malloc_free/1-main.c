#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *a;
    char *b;
    char *c;
    char *d;
    char *e;
    char *f;

    a = string_nconcat("Best", "School!!!", 6);
    printf("%s\n\n", a);
    b = string_nconcat(NULL, "School!!!", 5);
    printf("%s\n\n", b);
    c = string_nconcat("Best", NULL, 5);
    printf("%s\n\n", c);
    d = string_nconcat(NULL, NULL, 4);
    printf("%s\n\n", d);
    e = string_nconcat("Best", "School!!!", 20);
    printf("%s\n", e);
    f = string_nconcat("Best", "School!!!", 0);
    printf("%s\n", f);
    return (0);
}
