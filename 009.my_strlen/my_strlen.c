/*该程序为自制的strlen函数*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int my_strlen(char str[]){
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(void){
    char str[30];
    printf("请输入一个字符串:\n");
    fgets(str,sizeof(str),stdin);
    str[strcspn(str,"\n")]='\0';
    int len=my_strlen(str);
    printf("该字符串的有效长度是:%d\n",len);
    
    system("pause");
    return 0;
}