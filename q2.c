#include<stdio.h>
int main(){

    int a,b;

    printf("Enter value of a :");
    scanf("%d",&a);

    printf("Enter value of b :");
    scanf("%d",&b);

    
    if (a > b){
        printf("maximum value a : %d",a);
    } else {
        printf("maximun value b : %d",b);
    }
}