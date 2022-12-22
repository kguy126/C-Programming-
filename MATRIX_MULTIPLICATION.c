#include <stdio.h>
#include <stdlib.h>

/* 
   Save the three command-line arguments into nr1, nc1 and nc2.
 */

void get_args( char **argv, int *nr1, int *nc1, int *nc2 )
{
int i;
int n,j = 0;
i=1;
while( i < 4){
n=0;
for ( j = 0; *(*(argv + i) + j) != '\0'; j++) n = n * 10 + *(*(argv+i)+j)- '0';
if (i == 1)*nr1 = n;
if (i == 2)*nc1 = n;
if (i == 3)*nc2 = n;
i++;}
}




/*
   Initialize a 2-dimensional array.  
   Element (i, j) is assigned value i+j.
 */

void initMatrix ( int **a, int nrows, int ncols )
{
int i,j=0;
for (i = 0; i <= nrows - 1; i++){
for (j = 0; j <= ncols - 1; j++)
	*(*(a + i) + j) = i + j;
}
}





/* 
   Multiply arrays a and b.  
   Array a has nr1 rows and nc1 columns.
   Array b has nc1 rows and nc2 columns.
   Allocate an array c having nr1 rows and nc2 columns.
   Compute a x b and store the result in array c.
   Return array c.
   If an error occurs (e.g., insufficient memory), return NULL pointer.
 */


int **matrix_mult( int **a, int **b, int nr1, int nc1, int nc2 )
{
int **result;
int i,j, k;
result = (int**) malloc(nr1 * sizeof(int*)); 
	
for (i = 0; i < nr1; i++) *(result+i) = (int*) malloc(nc2 * sizeof(int));
for (i = 0; i < nr1; i++){
for (j = 0; j < nc2; j++){
for (k = 0; k < nc1; k++){
	*(*(result + i) + j)+=(*(*(a + i) + k))* (*(*(b + k) + j));
}
}
}
return (result);
}

/************************* END OF FILE *************************/