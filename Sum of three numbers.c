#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    printf("Sum of %d+%d+%d is %d",num1,num2,num3,num1+num2+num3);
    return 0;
}
