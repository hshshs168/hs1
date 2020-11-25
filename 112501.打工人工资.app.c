#include<stdio.h>
void main(){
int year;
printf("please input your old:\n");
scanf("%d",&year);
if(year>=0&&year<=10)
{
	printf("小学生，已黑化");
}
else if(year>=11&&year<=20)
{
	printf("干饭不积极，注定是瓜皮");
}
else if(year>=21&&year<=30)
{
	printf("打工人，打工魂，打工都是人上人");
}
else
{
	printf("半截入土");
}
}
