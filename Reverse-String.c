#include <stdio.h>

#define MAX_SIZE 100
main() {


int i=0;int k=0;int j=0;
char my_strg[ MAX_SIZE ];
char temp[MAX_SIZE];
char c;
while((c=getchar())!='\n'){
my_strg[i]=c;
temp[i]=c;
i++;
k++;
}
for(i=k-1;i>=0;i--){
my_strg[j]=temp[i];
j++;
}



   printf( "%s\n", my_strg );  /* output the reversed string */
}
