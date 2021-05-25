#include <stdio.h>

/* copy input to output, replacing each string
of one or more blanks by a single blank */

main()
{
    char input;
    char input_last;
    while ((input = getchar()) !=EOF)
    {
        if (input != ' ' || input_last != ' ')
        {
            putchar(input);
        }

        input_last = input;
    }
}