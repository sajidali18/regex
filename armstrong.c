#include<stdio.h>
    int digitcount(int n){
        int count=1;
     for(int i = 1; i < n!=0; i++)
    {
        count++;
        n=n/10;
    }
    }
    void armstrong(int n, int count){
        int last,sum = 0,temp=n;
        while (n!=0)
        {
            int mult =1;
            last =n%10;

            for (int  i = 1; i <= count; i++)
            {
               mult = last * mult;
            }
           sum= sum + mult;
           n=n/10;
        }
        if (sum==temp)
        {
            printf("%d is arm strong number",temp);
        }
        else{
            printf("%d is not Arm strong number",temp);
        }
    }
    int main(){
    int n,count;
    printf("enter the value of Arm strong number:");
    scanf("%d",&n);
     count = digitcount(n); 
     armstrong(n,count); 
}