#include<stdio.h>
#include<windows.h>
void main(){
	int a=1;
printf("现在是几秒:\n");
	do{
Sleep(1000);
printf("%d\n",a++);
}
while(a<=10000000);
}
