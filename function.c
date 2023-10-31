#include<stdio.h>
  void sum(){
    int a,b,c;
    printf("enter  the value of a and b");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("%d",c);
  }
    void add(){
    float a,b,c;
    printf("enter th evalue of a and b");
    scanf("%f %f",&a,&b);
    c=a+b;
    printf("%f",c);
  }
  float triangle(float a, float b){
     float c;
     c = a*b/2;
     return c;
  }
   float rectangle(float a, float b){
     float c;
     c = a*b;
     return c;
  }
    float square(float a){
     float c;
     c = 4*a;
     return c;
  }     
int main(){
    // sum();
    // add();
    float a,b,area;
    printf("enter the value of a and b :");
    scanf("%f %f",&a,&b);
    triangle(a,b);
    rectangle(a,b);
    square(a);
    printf("%f %f %f",triangle(a,b),rectangle(a,b),square(a));
}