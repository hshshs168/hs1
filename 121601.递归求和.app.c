#include<stdio.h>
int a(int x){
    if(x<=0){
    return 0;
    }
    return x+a(x-1);
}
void main(){
    int b;
    scanf("%d",&b);
  printf("%d\n",a(b));
}
