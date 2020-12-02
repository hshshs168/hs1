#include<stdio.h>
void main(){
int a;
scanf("%d",&a);
printf("%2.2d:",a/3600);
printf("%2.2d:",a/60);
printf("%2.2d\n",a%60);
}
