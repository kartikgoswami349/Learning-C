#include<stdio.h>
//this is just for fun and testing inputing numbers and addition simultaneously
int main(){
    int rahul, modi, sonia, result;
    printf("how much apple rahul contain? ");
    scanf("%d", &rahul);
    printf("how much apple modi contain? ");
    scanf("%d", &modi);
    printf("how much apple sonia contain? ");
    scanf("%d", &sonia);
    result=rahul+modi+sonia;
    printf("rahul,modi and sonia contain %d,%d and%d apple respectively\n", rahul, modi, sonia);
    printf("which makes total of %d\n", result);
    return 0;
} 