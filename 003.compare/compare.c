/* 输入两个实数，输出他们中较大的数 */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    double x,y,compare;
    printf("请输入两个不相等的实数 该程序将输出较大的实数\n");
    printf("请输入第一个实数\n");
    scanf("%lf",&x);
    printf("请输入第二个实数\n");
    scanf("%lf",&y);
    compare=x>y?x:y;
    printf("%lf 和 %lf 中较大的是 %lf \n",x,y,compare);
    system("pause");
    return 0;
}