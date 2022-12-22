#include <stdio.h>
#include <stdlib.h>
/* Function main()
   Input: a set of integers as command-line arguments.
   Output: the maximum, minimum and average of the above set displayed on the standard output.
 */
int myAtoi(char* s){
int i=0;
int sign=1;
int result=0;
if(s[0]=='-'){
sign=-1;
i++;
}
for(;s[i]!='\0';i++)
result=result*10+ (s[i]-'0');

return sign*result;

}

main( int argc, char *argv[] )
{
  int max, min;
  float avg;
float sum=0;
int i=1;
if(argc<=1){printf("Usage: mmavg int1 int2 int3 ... \n");exit(0);}
min=max=myAtoi(argv[1]);
for(i=1;i<argc;i++){
if(myAtoi(argv[i])>max) max=myAtoi(argv[i]);
if(myAtoi(argv[i])<min) min=myAtoi(argv[i]);
}
for(i=1;i<argc;i++){
sum+=myAtoi(argv[i]);
}
avg=sum/(argc-1);

  printf( "%d %d %.2f\n", max, min, avg );
}

