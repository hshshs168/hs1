#include<stdio.h>
void main(){
int a=6;
int b;
printf("欢迎来到猜数字游戏");
scanf("%d",&b);
if(b==a)
{
printf("恭喜小主猜对了");
}
else if(b>a)
{
printf("猜的有点大");
}
else if(b<a)
{
printf("猜的有点小");
}
}
