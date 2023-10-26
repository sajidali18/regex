#include<stdio.h>
int main(){
    int a;
    printf("enter the marks");
    scanf("%d",&a);
    if ((a>90)&&(a<=100))
    {
        printf("grade A");
    }
    else if ((a>80)&&(a<=90))
    {
        printf("grade B");
    }
    else if((a>70)&&(a<=80))
    {
     printf("Grade C");
    }
  else if((a>60)&&(a<=70))
{
    printf("grade D");
}
else if((a>50)&&(a<=60)){
    printf("Grade E");
}
else{
  printf("student is fail");
}
}