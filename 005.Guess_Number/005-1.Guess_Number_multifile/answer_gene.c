#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"game_system.h"

int answer_gene(void){
    srand((unsigned int)time(0));
    return rand()%100+1;
}