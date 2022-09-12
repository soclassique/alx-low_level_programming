#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
i = 48;
j = 49;
k = 50;
while  ((i < 56) && (j < 57) && (k < 58))
{
putchar(i);
putchar(j);
putchar(k);
if ((i == 55 && (j == 56) && (k == 57))
{
putchar('\n');
i++;
j++;
k++;
}
else
{
putchar(44);
putchar(32);
if (k < 57)
k++;
}
else if ((j < 56) && (k == 57))
{
k = 1 + ++j;
}
else
{
j = 1 + ++i;
k = 1 + j;
}
}
}
return (0);
}
