#include<stdio.h>
int main(){

int a,b,c;

printf("Enter first value :");
scanf("%d",&a);

printf("Enter second value :");
scanf("%d",&b);

printf("Enter third value :");
scanf("%d",&c);


if(a<b){
    if(a<c){
        printf("a is mini %d",a);
    } else{
        printf("c is mini %d",c);
    }
} else{
    if(b<c){
        printf("b is mini %d",b);
    } else{
         printf("c is mini %d",c);
    }
}

}