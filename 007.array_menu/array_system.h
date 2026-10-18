/*该头文件用于定义进阶数组练习的自定义函数*/
#ifndef ARRAY_SYSTEM_H
#define ARRAY_SYSTEM_H
//数组的生成与打印
int input_array(int arr[],int n);
void generate_random_array(int arr[],int n);
void print_array(int arr[],int n);

//寻找最大值或最小值
int find_max(int arr[],int n);
int find_min(int arr[],int n);

//数组中数据的排序
void sort_asc(int arr[],int n);
void sort_desc(int arr[],int n);
void reverse_array(int arr[],int n);

//数组数据的代数处理
void count_pos_neg(int arr[],int n);
int sum_array(int arr[],int n);

//菜单打印
void MENU(void);

#endif