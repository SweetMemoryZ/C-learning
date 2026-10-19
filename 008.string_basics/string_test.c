/*该程序用于学习字符串的基础内容*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    char str1[]="Hello";
    printf("str1 占用的字节数:%zu\n",sizeof(str1));

    char str2[20];
    printf("请输入一个名字:\n");
    fgets(str2,sizeof(str2),stdin);
    printf("你输入的名字是:%s",str2);
    printf("str2的长度是:%zu\n",strlen(str2));
    printf("\n--- 揭秘内存里的真实字节 ---\n");
        for (int i = 0; i < 10; i++) {
            if (str2[i] == '\0') {
                printf("\\0 (结束符)\n");
                break;
            }
            if (str2[i] == '\n') {
                printf("[第 %d 个字节]: 是回车符 \\n (ASCII值 10)\n", i);
            } 
            else {
                printf("[第 %d 个字节]: %d\n", i, (unsigned char)str2[i]);
            }
        }

    char str3[20];
    strcpy(str3,str1);
    printf("复制后的str3是:%s\n",str3);

    system("pause");
    return 0;
}