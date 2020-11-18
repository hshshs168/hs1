#include<stdio.h>
void main(){
int a;
printf("请输入工资：\n");
scanf("%d",&a);
if(a<=0)
{
printf("连花呗都还不起，不配用这个程序,你个废物");
}
else if(a>=1&&a<=500)
{
printf("赤贫");
}
else if(a>=501&&a<=1500)
{
printf("贫困");
}
else if(a>=1501&&a<=5000)
{
printf("打工人");
}
else if(a>=5001&&a<=12000)
{
printf("你就是人上人");
}
else if(a>=12001&&a<=100000)
{
printf("程序员");
}
else if(a>=100000&&a<=100000000)
{
printf("爹");
}
}
