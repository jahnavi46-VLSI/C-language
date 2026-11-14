#include<stdio.h>
int main(){
    int a;
    printf("a =");
    scanf("%d",&a);
    if(((a>>1)<<1)==a){
        printf(" a is even");
    }
    else{
        printf(" a is odd");
    }
}
