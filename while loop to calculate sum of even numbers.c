#include<stdio.h>
int main()
{
    int i=2,sum=0;
    printf(" The even numbers are:\n");
    while(i<30)
    {
        i+=2;
        printf("%d\n",i);
        sum+=i;
    }
    printf("The sum of even numbers is:%d",sum);
    return 0;
}
