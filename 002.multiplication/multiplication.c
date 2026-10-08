/* 输入两个实数，输出他们的乘积 */
#include<stdio.h>
#include<stdlib.h>
int main(void){
    double x,y,pro;
    printf("请输入第一个乘数\n");
    scanf("%lf",&x);
    printf("请输入第二个乘数\n");
    scanf("%lf",&y);
    pro=x*y;
    printf("积为 %lf \n",pro);
    system("pause");
    return 0;

}