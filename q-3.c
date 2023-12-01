#include<stdio.h>
int main(){

 int num,s;

 printf("Press 1 for English\n");
 printf("Press 2 for Hindi\n");
 printf("Press 3 for Gujarati");
 scanf("%d", &num);

switch(num){

    case 1 : printf("Press 1 for English");
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    
    

    scanf("%d",&s);

    switch(s){
       case 1 : printf("You have successfully done Top-up Recharge.");
       break ;
       case 2 : printf("You have successfully done Top-up Recharge.");     
       break ;
       case 3 : printf("You have successfully done Top-up Recharge.");
       break ;


    }
 



    break ;
    case 2 : printf("Hindi");
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    
    
    scanf("%d",&s);

   switch(s){
       case 1 : printf("Aapne safaltapurvak Internet Recharge kar liya he.");
       break ;
       case 2 : printf("Aapne safaltapurvak Internet Recharge kar liya he.");
       break ;
       case 3 : printf("Aapne safaltapurvak Internet Recharge kar liya he.");
       break ;


   }

    break ;
    case 3 : printf("Gujarati");
    printf("Press 1 for Internet Recharge\n");
    printf("Press 2 for Top-up Recharge\n");
    printf("Press 3 for Special Recharge\n");
    
    
    scanf("%d",&s);

   switch(s){
       case 1 : printf("Tame safaltapurvak Special Recharge karyu chhe.");
       break ;
       case 2 : printf("Tame safaltapurvak Special Recharge karyu chhe.");
       break ;
       case 3 : printf("Tame safaltapurvak Special Recharge karyu chhe.");
       break ;
     

   }


    break ;
}


}