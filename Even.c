#include<stdio.h>
int main(){
    int i, n,sum=0;
    printf("enter the value of n:\n");
    scanf("%d",&n);
    for ( i = 1; i <=n; i++)
    {
        if (i%2 == 0)
        {
            // printf("%d",i);
        sum = sum + i;
        }
        
    }
    printf("Sum of odd number is %d\n",sum);
}
