#include<stdio.h>
int main(){
    int n;
    printf("enter the input");
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            if (j>=0 && j<n-i)
            {
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
}