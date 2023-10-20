#include<stdio.h>
int main(){
    int c;
    float f;
    printf("enter the temprature in degree selsius");
    scanf("%d",&c);
    f = (c *9/5) + 32;
    printf("the temprature in ferenaite is is %f",f);
}