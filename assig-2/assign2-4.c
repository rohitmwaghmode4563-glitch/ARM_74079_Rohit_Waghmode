
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
    unsigned int regr=0x05;
    unsigned int value1,value2;
    printf("left shifted by 2:");
    value1=(regr<<2);
    print_bin_hex(&value1,sizeof(value1));
    printf("original value right shifted by 1:");
    value2=(regr>>1);
    print_bin_hex(&value2,sizeof(value2));
    return 0;
}
