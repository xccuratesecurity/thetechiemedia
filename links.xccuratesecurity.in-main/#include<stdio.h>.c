#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter upper limit:");
    scanf("%d, &n");
    for (i=1; i<=n; i+=2)
    {
        sum+=1;
    }
    printf("Sum of odd numbers=%d, sum");
    return 0;
}