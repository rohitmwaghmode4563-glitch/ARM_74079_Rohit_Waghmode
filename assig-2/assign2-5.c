
#include<stdio.h>
#define BV(n)(1<<(n))
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
    unsigned int regr=0xAA;
    unsigned int mask=0x07;
    unsigned int value1,value2=0x03;

    printf("value before reading:%u\n",regr);
    print_bin_hex(&regr,sizeof(regr));
    printf("after reading:");
    value1=((regr>>2)&mask);
    print_bin_hex(&value1,sizeof(value1));

    printf("after writing:");
    regr=(regr&~(BV(2)|BV(3)|BV(4)));
    regr=regr|(value2<<2);
    print_bin_hex(&regr,sizeof(regr));
    return 0;
}

