#include<stdio.h>
int main() {
   int a,b;
    printf(" a = \n ");
    scanf("%d" ,&a);
    printf(" b = \n ");
    scanf("%d" ,&b);
    if(a>b) {
      printf(" a is the maximum no \n ");
    }
    else if(a<b) {
        printf(" a is the minimum no \n ");
    } 
     else {
        printf(" a = b");
     }
   return 0;
}
    
