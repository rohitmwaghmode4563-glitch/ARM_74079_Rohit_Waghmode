#include<stdio.h>

int main(void){
    unsigned int regr=0x08;
    unsigned int Bv3=0x08;
    if(regr&Bv3){
        printf("3 bit is SET");
    }
    else{
        printf("3 bit is CLEAR");
    }
    return 0;
}

