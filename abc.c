#include<stdio.h>>
int main(){
    int n,sum =0;
    printf("enter the value of odd no. ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i+=2)
    {
        sum = sum +i;
    }
    printf("%d",sum);
}