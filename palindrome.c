#include<stdio.h>
int main(){
    int n,reminder,reverse=0,original;
    printf("enter the integer value ");
    scanf("%d",&n);
    original= n;
    while (n!=0)
    {
       reminder=n%10;
       reverse = reverse * 10 + reminder;
       n = n/10;
    }
    if(original==reverse)
    {
        printf(" %d is palindrome",original);
    }
    else{
        printf("%d is not palindrome",original);
    }
    
}