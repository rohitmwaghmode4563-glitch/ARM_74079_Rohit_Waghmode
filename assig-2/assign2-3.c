#include<stdio.h>
void *vp=100;
unsigned int size=1;
void print_bin_hex(void *vp , unsigned int size)
{
    int i;
    for(i=size-1;i>=0;i--)
    {
    unsigned mask = 0x80;
    while(mask){
        if(mask &  *((unsigned char*)vp+i)){
            printf("1");
        }
        else{
            printf("0");
        }
        mask = mask >> 1 ;
    }
    printf(" ");
    }
    printf("\n");
    printf("hex:0x%X\n\n",*(unsigned char*)vp);
}
int main(void){
    unsigned int regr=0xABCD;
    unsigned int mask=0x0000000F;
    unsigned int value1,value2;
    printf("extracted the lower 4 bits:");
    value1=((regr>>0)& mask);
    print_bin_hex(&value1,sizeof(value1));
    printf("extracted the upper 4 bits of the lower byte:");
    value2=((regr>>4)& mask);
    print_bin_hex(&value2,sizeof(value2));
    return 0;
}
