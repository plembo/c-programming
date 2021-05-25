#include <stdio.h>

/* copy input to output, replacing each tab by \t,
each backspace by \b and each backslash by \\, making
tabs and backspaces unambiguously visible */

main()
{
    char input;
    while ((input = getchar()) !=EOF)
    {
        if (input == '\t')
        {
            putchar('\\');
            putchar('t');
        }
        else if (input == '\b')
        {
            putchar('\\');
            putchar('b');
        }
        else if (input == '\\')
        {
            putchar('\\');
            putchar('\\');
        }
        else
        {
            putchar(input);
        }
    }
}
