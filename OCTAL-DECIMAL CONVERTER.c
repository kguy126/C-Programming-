
#include <stdio.h>

#define MAX_SIZE 100

main() {

   char my_strg[ MAX_SIZE ];   /* to store an octal number in the form of an array of char */
   int my_int=0;

int i=0;int k=0;int m=0; int r=0;double base=8;char c;int pow=0;

while((c=getchar())!='\n'){
my_strg[i]=c;
i++;k++;
}
for(i=0;i<=k-1;i++){if(my_strg[i]-'0'>=8){
printf("Error: not an octal number\n");
return 0;}}
if(my_strg[0]=='-'){
for(i=k-1;i>0;i--){
r=power(pow,8);
my_int -= (my_strg[i]-'0')*r;
pow++;}}
else{
for(i=k-1;i>=0;i--){
r=power(pow,8);
my_int += (my_strg[i]-'0')*r;
pow++;}}

   printf( "%d\n", my_int );  /* output the decimal integer */

}
power(int a,int b){
int i=0;
int c=1;
for(i=0;i<a;i++){
c*=b;
}
return c;
}