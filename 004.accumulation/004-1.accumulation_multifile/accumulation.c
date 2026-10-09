/*该程序用于用户输入一个整数n，输出1+2+...+n的结果*/
#include<stdio.h>
#include<stdlib.h>
#include"accu_system.h"

int main(void){
    printf("该程序用于用户输入一个整数n 输出1+2+...+n的结果\n");
    int x;
    x=get_valid_n();
    int sum;
    sum=calculate_sum(x);
    print_result(x,sum);
    system("pause");
    return 0;

}