#include<stdio.h>
#include<stdlib.h>
#include"game_system.h"

int guess_progress(int input,int answer){
    if (input>answer){
        printf("该数比%d小\n",input);
        return 1;
    }
    else if (input<answer){
        printf("该数比%d大\n",input);
        return 1;
    }
    else{
        printf("猜对了 谜底是%d \n",answer);
        return 0;
    }
    
}
