// #include<stdio.h>
// int main(){
//     int n,i,j;
//     scanf("%d",&n);
//     for (i = 0; i< n; i++)
//     {
//         for ( j = 0; j<=i; j++)
//         {
//         printf("*");
//         }
//         printf("\n");
//     }   
// }

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for ( int i = 0; i < n; i++)
    {
       for (int j=0; j <n; j++)
       {
        
        if (j>=0 && j<=i)
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