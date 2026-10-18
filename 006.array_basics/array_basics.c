/*该程序用于学习数组基础*/
#include<stdio.h>
#include<stdlib.h>

int find_max(int arr[],int n){
    int max=arr[0];
    for (int i = 0; i < n; i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

int main(void){
    int score[6]={70,80,90,100,110,120};
    int n=sizeof(score)/sizeof(score[0]);
    int max=find_max(score,n);
    printf("最高分为%d\n",max);
    system("pause");
}