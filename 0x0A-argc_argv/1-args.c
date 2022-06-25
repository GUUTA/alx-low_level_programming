#include <stdio.h>

/**
*  *main - function
*   *@argc: parameter 1
*    *@argv: parameter2
*     *Return: 0
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
int i;
while (i < argc)
{
i++;
}
printf("%d\n", --i);
return (0);
}
