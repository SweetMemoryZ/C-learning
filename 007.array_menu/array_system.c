/*该自定义函数用于用户录入数组*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"array_system.h"

//1.该代码用于用户手动录入数组
int input_array(int arr[],int n){
    int x;
    int count=0;
    printf("请输入数组的内容，输入到-1结束录入\n");
    while (1){
        if (scanf("%d",&x)!=1){
            printf("输入无效 请重新输入\n");
            while(getchar()!='\n');
            continue;
        }
        if (x!=-1){
            if(count>=n){
                printf("仓库已满 无法再输入数据\n");
                while(getchar()!='\n');
                break;
            }
            arr[count]=x;
            count++;
        }
        else{
            break;
        }
    }
    return count;
}

 //2.该代码用于随机生成数组   
void generate_random_array(int arr[],int n){
    printf("正在为您随即生成 %d 个随机数\n", n);
    int i;
    for(i=0;i<n;i++){
        int x=rand()%201-100;
        arr[i]=x;
    }
    printf("生成完毕\n");
}

//3.该代码用于打印数组中的所有数据
void print_array(int arr[],int n){
    if(n==0){
        printf("当前数组为空\n");
        return;
    }
    printf("该数组中的数据为\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n共%d个数据 打印完成\n",n);
}

//4.该函数用于输出数组数据最大值
int find_max(int arr[],int n){
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

//5.该函数用于输出数组数据最小值
int find_min(int arr[],int n){
    int min=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

//6.该函数用于从小到大排序数组
void sort_asc(int arr[],int n){
    int x;
    if(n==0){
        printf("当前数组为空\n");
        return;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                x=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=x;
            }
        }
    }
}

//7.该函数用于从大到小排序数组
void sort_desc(int arr[],int n){
    int x;
    if(n==0){
        printf("当前数组为空\n");
        return;
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]<arr[j+1]){
                x=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=x;
            }
        }
    }
}

//8.该函数用于将数组中数据顺序反转
void reverse_array(int arr[],int n){
    int x;
    if(n==0){
        printf("当前数组为空\n");
        return;
    }
    for(int i=0;i<n/2;i++){
        x=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-i-1]=x;
    }
}

//9.该函数用于统计数组中正负数的数量
void count_pos_neg(int arr[],int n){
    int pos=0;
    int zero=0;
    int neg=0;
    if(n==0){
        printf("当前数组为空\n");
        return;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            pos++;
        }
        else if(arr[i]==0){
            zero++;
        }
        else{
            neg++;
        }
    }
    printf("数组中正数的数量为%d\n",pos);
    printf("数组中负数的数量为%d\n",neg);
    printf("数组中零的数量为%d\n",zero);
}

//10.该函数用于统计数组中各数据代数和
int sum_array(int arr[],int n){
    if(n==0){
        printf("当前数组为空\n");
        return 0;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

//11.该函数用于打印菜单
void MENU(void){
    printf("========多功能数组程序菜单========\n");
    printf("1.手动输入数组数据\n");
    printf("2.随机生成数组数据\n");
    printf("3.打印数组中所有数据\n");
    printf("4.输出最大值\n");
    printf("5.输出最小值\n");
    printf("6.将数组从小到大排序\n");
    printf("7.将数组从大到小排序\n");
    printf("8.将数组倒序\n");
    printf("9.统计数组中正、负数数据的数量\n");
    printf("10.将数组中数据求和\n");
    printf("0.结束并退出\n");
    printf("================================\n");
    printf("\n请输入0-10之间的整数\n");
}