#include<stdio.h>
int main()
{
	int number,reminder,sum;
	printf("enter the number");
	scanf("%d",&number);
	while(number>0)
	{
		reminder=number%10;
		sum=sum+reminder;
		number=number/10;
    }
		printf("sum of digit of a number=%d",sum);
}
