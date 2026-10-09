/*本自定义函数用于获得合法的参数*/
#include<stdio.h>
#include<stdlib.h>
#include"accu_system.h"

int get_valid_n (void){
    int n;
    while (1){
        printf("请输入一个整数n\n");
        scanf("%d",&n);
        if (n<1){
        printf("n不合法 请输入的n>=1\n");
            }
        else{
            break;
        }
    }
    return n;
}