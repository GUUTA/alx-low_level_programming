#include <stdlib.h>
#include <stdio.h>

/**
* create_array - creates array
* @size: size of array
* @c: array element
* Return: array or NULL
*/

char *create_array(int size, char c)
{
char *s;
int i;
if (size == 0)
return (NULL);
s = malloc((size + 1) * sizeof(char));
if (s == NULL)
return (NULL);
i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
