#include "poly.h"
/* 
  Initialize all coefficients and exponents of the polynomial to zero.
 */
void init_polynom( int coeff[ ], int exp[ ] )
{


	int i=0;
while(i<ASIZE){
	coeff[i]=0;
	exp[i]=0;
i++;
}				
}  /* end init_polynom */



/*
  Get inputs from user using scanf() and store them in the polynomial.
 */
void get_polynom( int coeff[ ], int exp[ ] )
{
	int input[ASIZE];
	int i;
	int n;
	int p = 0;

	
	scanf("%d", &input[0]);
	for ( i = 1; i <= (input[0] * 2); i++ ) {
		scanf("%d", &input[i]);
	}
	
	for ( n= 1; n < i - 1; n++, p++ ) {
 		coeff[p] = input[n];
		n++;
		exp[p] = input[n];
	}

}  /* end get_polynom */



/*
  Evaluate the polynomial for the value of x and store the result p(x) in variable result.
 */
void eval_polynom( int coeff[ ], int exp[ ], double x, double *result )
{

   /* ADD YOUR CODE HERE */
        int i, j; 
	double sum = 0;
	double answer;

	for ( i = 0; i < ASIZE; i++ ) {
		answer = x;
		if (exp[i] != 0) {
			for (j = 0; j < exp[i] - 1; j++) 
				answer *= x;
			
			answer *=coeff[i];
			sum += answer;
		} else {
			answer = 1 * coeff[i];
			sum += answer;
		}
	}

	*result = sum; 			

}  /* end eval_polynom */



/*
  Add two polynomials and the result is stored in the first polynomial (arrays co1[] and ex1[]).
 */
void add_polynom( int co1[ ], int ex1[ ], int co2[ ], int ex2[ ] )
{
        int tempa[ASIZE], tempb[ASIZE];
	int n=0;;
	int j=0;
	int k=0;
	int m=0;

	for (n = 0; n < ASIZE; n++) {
		if (ex1[j] == ex2[k]){
			tempa[n] = co1[j] + co2[k];
			tempb[n] = ex1[j];
			j++;k++;
		} else if (ex1[j] > ex2[k]) {
			tempa[n] = co1[j];
			tempb[n] = ex1[j++];
		} else if (ex1[j] < ex2[k]) {
			tempa[n] = co2[k];
			tempb[n] = ex2[k++];
		}
	}

	while( m < ASIZE ) {
		co1[m] = tempa[m];
		ex1[m] = tempb[m];
		m++;
	}

  


}  /* end add_ polynom */


/************************** END OF FILE ***************************/




