#include<stdio.h>
#include<string.h>
void main(){
char a[]="请问今天是什么节？";
		printf("%s\n",a);
		scanf("%s",&a);
		if(!strcmp(a,"春节")){ 
	    printf("给我安排饺子");	
		}
		if(!strcmp(a,"端午")){
		printf("给我安排粽子");
		}
		if(!strcmp(a,"元宵节")){
		printf("给我安排元宵");
		}
}
