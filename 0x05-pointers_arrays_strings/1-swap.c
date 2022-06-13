#include "main.h"
/**
* swap int-swaps the value of two int.
* point to an int
* point to other int
* return nothing
*/
void swap_int (int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
