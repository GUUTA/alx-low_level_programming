#include "main'h"
/**
* Swap int -swaps the value of two int.
* pointer to an int 
* point to other int
* return nothing
*/
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b =aux;
}
