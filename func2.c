#include<stdio.h>
void factorial(int n){
    int fact =1;
    for (int i = 1; i <= n; i++)
    {
        fact =fact*i;
    }
    printf("%d ",fact);
    printf("\n");
}
 void primenumber(int n){
    int flag =0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            flag =1;
            break;
        }
    }
        if (flag==0)
        {
           printf("%d is prime no.",n);
        }
        else{
            printf("%d is not prime no.",n);
        }
 }
 int main(){
    int n;
    printf("enter the integer value that you want to know factor and know prime no.:");
    scanf("%d",&n);
    factorial(n);
    primenumber(n);

}