#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"array_system.h"

int main(void){
    srand((unsigned int)time(0));
    int arr[100];
    int n;
    int choice;

    while (1){
        MENU();
        scanf("%d",&choice);

        switch(choice){

            case 1:
            printf("请输入你想录入多少数据(最多100个)\n");
            scanf("%d",&n);
            n=input_array(arr,n);
            break;

            case 2:
            printf("请输入你想生成多少数据(最多100个)\n");
            scanf("%d",&n);
            generate_random_array(arr,n);
            print_array(arr,n);
            break;

            case 3:
            print_array(arr,n);
            break;

            case 4:
            if(n>0){
            int max=find_max(arr,n);
            printf("当前数组最大值为%d\n",max);
            }
            else printf("数组为空 请先输入或生成数据!\n");
            break;

            case 5:
            if(n>0){
            int min=find_min(arr,n);
            printf("当前数组最小值为%d\n",min);
            }
            else printf("数组为空 请先输入或生成数据!\n");
            break;

            case 6:
            sort_asc(arr,n);
            print_array(arr,n);
            break;

            case 7:
            sort_desc(arr,n);
            print_array(arr,n);
            break;

            case 8:
            reverse_array(arr,n);
            print_array(arr,n);
            break;

            case 9:
            count_pos_neg(arr,n);
            break;

            case 10:
            int sum=sum_array(arr,n);
            printf("数组中所有数据代数和为%d\n",sum);
            break;

            case 0:
            printf("程序结束 再见！\n");
            system("pause");
            return 0;

            default:
            printf("输入无效 请重新输入!\n");
            break;


        }
    }
    return 0;
}