#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,b,sum,diff;
	printf("Enter the numbers:\n");
	scanf("%d %d", &b, &a);
	sum = a - b;
	diff = a + b;
	printf("Sum: %d, Diff : %d\n",sum, diff);
	return 0;
}

