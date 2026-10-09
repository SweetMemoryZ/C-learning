/*本自定义函数用于计算累加和*/
#include<stdio.h>
#include<stdlib.h>
#include"accu_system.h"

int calculate_sum(int n){
    int i;
    int sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}