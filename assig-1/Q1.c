#include <stdio.h>
int countones(unsigned int n) {
    int count = 0;
    while (n > 0) {
        if (n & 1)      
            count++;
        n >>= 1;        
    }
    return count;
}
int main() {
    unsigned int num;
    printf("Enter a number: ");
    scanf("%u", &num);
    printf("Number of 1 bits = %d\n", countones(num));
    return 0;
}
