/* 该程序用于用户输入一个整数n，输出1+2+...+n的结果 */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    int x;
    int sum=0;
    int i;
    printf("该程序用于用户输入一个整数n 输出1+2+...+n的结果\n");
    while (1){
        printf("请输入一个整数n\n");
        scanf("%d",&x);
        if (x<1){
        printf("n不合法 请输入的n>=1\n");
            }
        else{
            break;
        }
    }
    for (i=1; i<=x; i++){
        sum=sum+i;
    }
    printf("从1到n的累加为 %d\n",sum);
    system("pause");
    return 0;
}