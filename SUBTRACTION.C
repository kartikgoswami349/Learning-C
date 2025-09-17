#include<stdio.h>

int main(){
    int a,b,result;
    printf("enter the integer a");
    scanf("%d",&a);

    printf("enter the integer b");
    scanf("%d",&b);

    result=a-b;
    // we can also use this substraction logic directly in printf statement
    printf("subtraction of %d and %d is %d", a, b, result);
    return 0;
}    