#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i = '0';
int j = '0';
int k = '0';
while (i <= '7')
{
while (k <= '9')
{
if (i < j && j < k)
if (!(i == '7' && j == '8' && k == '9'))
putchar(',');
putchar(' ');
}
j = '0';
i++;
putchar('\n');
return (0); 
}
