#include<stdio.h>
#include<string.h>
void main(){
printf("你从哪里来\n");
    int x=15,y;
    char a[]="我是你爸爸";
    char b[]="我是你爸爸";
    scanf("%s",&b);
    if( strcmp(a,b)==0){
    printf("口令正确，进入游戏\n");
        scanf("%d",&y);
        for(;y!=x;){
            printf("你好像猜错了!\n");
          scanf("%d",&y);
    }
    printf("你猜对了，恭喜你");
    }
    else{
    printf("口令错误，拉出去枪毙");
    }
}
