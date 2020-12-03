#include<stdio.h>
void main(){
int b;
int row,column;
int a[3][5]={
	{17,18,19,20,21},
	{22,23,24,24,26},
	{27,28,29,30,31}
};
printf("你最想回到多少岁？\n");
for(row=0;row<3;row++){
	for(column=0;column<5;column++){
	printf("%d ",a[row][column]);
	}
	printf("\n");
}
scanf("%d",&b);
printf("已经回不去了。。。。");
}
