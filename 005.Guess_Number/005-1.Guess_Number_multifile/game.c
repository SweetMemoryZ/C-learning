#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"game_system.h"

int main(void){
    int x;
    int y=answer_gene();
    int reget;
    printf("猜字游戏:从1-100中猜测一个数字\n");
    printf("请输入一个1-100之间的整数\n");
    while (1){
        scanf("%d",&x);
        reget=guess_progress(x,y);
        if (reget=1){
            printf("请输入一个1-100之间的整数\n");
        }
        else{
            break;
        }
        
    }
    system("pause");
    return 0;
}