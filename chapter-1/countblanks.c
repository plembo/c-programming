#include <stdio.h>
/* count blanks, tabs, and newlines */
main()
{
  int blanks = 0;
  int tabs = 0;
  int newlines = 0;

  char input;
  while ((input = getchar()) != EOF)
  {
    if (input == ' ')
    {
      ++blanks;
    }
    else if (input == '\t')
    {
      ++tabs;
    }
    else if (input == '\n')
    {
      ++newlines;
    }
  }

  printf("blanks: %d\ntabs: %d\nnewlines: %d\n",
         blanks, tabs, newlines);
}
