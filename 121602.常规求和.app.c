#include<stdio.h>
void main(){
    int x,y,c;
    x=1,y=0;
   scanf("%d",&c);
    do
        {
            y=x+y;
            x++;
    }
    while(x<=c);
    printf("%d\n",y);
}
