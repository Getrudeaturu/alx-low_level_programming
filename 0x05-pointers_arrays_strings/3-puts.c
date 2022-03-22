#include "main.h"

/**
* _puts - prints a string & then a new line
* @str: input string.
* Return: no return.
*/
void _puts(char *str)
{
  int i = 0;
  
  while (str[i] > -1)
  {
    if (str[i] == '\0')
    {
      _putchar('\n');
      break;
    }
    else
    {
      _putchar(str[i]);
      i++;
    }
  }
}
