#include "main.h"
/**
* strlen-function that returns the lenght of astring.
* @s: pointer to string 
* Return: int
*/
int _strlen(char *s)
{
int i = 0;
while(s[i] != '\0')
{
i+=1;
}
return(i);
}
