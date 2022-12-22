#include <stdio.h>
int main(){
int n[100];
int i;
int c=0;
int max=0;
int min=0;
for(i=0;i<100;i++){

scanf("%d",&n[i]);
c++;
if(n[i]==0)break;

}
max=min=n[0];
for(i=1;i<c;i++){
if(n[i]>max)max=n[i];
if(n[i]<min)min=n[i];
}

printf("%d\t",max);
printf("%d\n",min);
}

