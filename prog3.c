#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    if (a%b==0)
    {
        printf("a and b are divisibile");
    }
 else{
    printf("a and b are not divisible");
 }   
}