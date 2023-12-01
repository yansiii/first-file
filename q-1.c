#include<stdio.h>
int main(){

int a,b,c,d;

printf("Enter number A :");
scanf("%d", &a);

printf("Enter number B :");
scanf("%d", &b);

printf("Enter number C :");
scanf("%d", &c);

printf("Enter number D :");
scanf("%d", &d);



  (a<b) ? (a<c) ? (a<d) ? printf("A is maximum"): printf("d is maximum"):

  (c<d) ? printf("c is maximum"): printf("d is maximum"):

  (b<c) ? (b<d) ? printf("b is maximum"): printf("d is maximum"):

  (c<d) ? printf("c is maximum"): printf("d is maximum");



}


