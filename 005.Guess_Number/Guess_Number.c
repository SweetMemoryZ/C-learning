/* 该程序用于和用户玩1-100的猜数字游戏 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void){
    int x;
    printf("猜字游戏:从1-100中猜测一个数字\n");
    srand((unsigned int)time(0));
    int y=rand()%101;
    while (1){
        printf("请输入一个1-100之间的整数\n");
        scanf("%d",&x);
        if(x>y){
            printf("该数比 %d 小\n",x);
        }
        else if (x<y){
            printf("该数比 %d 大\n",x);
        }
        else{
            break;
        }
    }
    printf("你猜对了 谜底是 %d \n",y);
    system("pause");
    return 0;
}