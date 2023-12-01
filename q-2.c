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



  (a<b) ? (a<c) ? (a<d) ? printf("A is minimum"): printf("d is minimum"):

  (c<d) ? printf("c is minimum"): printf("d is minimum"):

  (b<c) ? (b<d) ? printf("b is minimum"): printf("d is minimum"):

  (c<d) ? printf("c is minimum"): printf("d is minimum");


}