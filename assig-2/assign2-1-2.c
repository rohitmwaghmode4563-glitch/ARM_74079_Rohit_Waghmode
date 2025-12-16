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
    unsigned int regr=0x2A;
    unsigned int Bv1=0x02;;
    regr&=~(Bv1);
    printf("set bit:%u\n",regr);
    print_bin_hex(&regr,sizeof(regr));

    return 0;
}

