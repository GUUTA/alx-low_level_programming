#include <stdlib.h>
#include <stdio.h>
/**
*  *str_size - gets string size
*   *@a: string
*    *Return: string size
*/
int str_size(char *a)
{
int j = 0;
while (a[j] != '\0')
{
j++;
}
return (j);
}
/**
*  *str_concat - concatenates 2 strings
*   *@s1: string 1
*    *@s2: string 2
*     *Return: pointer to combined string a
*/
char *str_concat(char *s1, char *s2)
{
int i, j = 0, total;
char *a;
total = str_size(s1) + str_size(s2);
a = malloc(sizeof(char) * total);
if (a == NULL)
{
return (NULL);
}
for (i = 0; i < str_size(s1); i++)
{
a[i] = s1[i];
}
while (i <= total)
{
a[i] = s2[j];
i++;
j++;
}
a[i] = '\0';
return (a);
}
