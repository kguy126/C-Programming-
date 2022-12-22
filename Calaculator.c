#include <stdio.h>
#include <stdlib.h>

int calculator(int a, int b, char op){
int s;
switch (op){
case '+' : s=a+b; break;
case '%' : s=a%b; break;
case 'x' : s=a*b; break;
case '-' : s=a-b; break;
case '/' : s=a/b; break;
}

return s;
}

int ad(char* str){
int number=0;
int i=0;
for (i=0; str[i]!='\0'; i++)
number = number * 10 + (str[i] -'0');
return number;
}

/* Implement a simple calculator. 
   Input: two operands and one operator as command-line arguments.
   Output: the result displayed on the standard output. 
 */

void main( int argc, char *argv[] )
{
  
if(argc!=4){printf("Usage: calc [operand_1] [operator] [operand_2] \n" ); exit(0);}

  int result = 0;  /* stores the result of the arithmetic operation */
  int i,c=0;
  int b=0;
  int o=0;

  
b=ad(argv[1]);
c=ad(argv[3]);


  /**** DO NOT ADD OR CHANGE ANYTHING BELOW THIS LINE ****/
result = calculator(b, c, argv[2][0] );
  printf("%d\n", result);
}

