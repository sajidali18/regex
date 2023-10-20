#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter the numbers who will swapped");
    scanf("%d %d",&a,&b);
    temp =a;
    a =b;
    b =temp;
    printf("the swapped no. is %d %d",a,b);
}