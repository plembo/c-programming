#include <stdio.h>

/* Verify that getchar() != EOF is 0 or 1
To test, run program and type CTRL+D on Linux or CTRL+Z on Windows */

main()
{
    printf("value of expression: %d", getchar() != EOF);
}
