
#include<stdio.h>
int main(){

    int x;
    printf("How many stars will be there in the line?\n");
    scanf("%d", &x);
    printf("\n");

    printf("The expected vertical line:-\n");

    for(int i=1; i<=x; i++)
    {
        printf("*\n");
    }
    printf("\n");

    return 0;
}
