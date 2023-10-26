#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        printf("a is grater");
    }
    else if(a<b)
    {
        printf("b is greater");
    }
    else{
        printf("both are equal");
    }
    
    
}