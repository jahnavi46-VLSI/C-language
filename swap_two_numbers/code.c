#include<stdio.h>
int main(){
   int a=46;
   int b=43;
   int temp;
   printf("a=%d \n",a);
   printf("b=%d \n",b);
   temp=a;
   a=b;
   b=temp;
   printf("a=%d \n",a);
   printf("b=%d \n",b);
   return 0;
}
