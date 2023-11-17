#include<stdio.h>
int main(){

    int x;
    printf("How many stars will be there in the line?\n");
    scanf("%d", &x);
    printf("\n");

    printf("The expected line:-\n");

    for(int i=1; i<=x; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
