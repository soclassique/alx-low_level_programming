#include "main.h"
/**
* print_alphabet - prints alphabet in lowercase
*
* Return: void.
*/
void print_alphabet(void)
{
int ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch = ch + 1;
}
_putchar('\n');
return (0);
}
