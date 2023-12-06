#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
#include"loag.c"
/* subgen() complete dont touch this code*/
void subgena() {

  FILE *fp;

  // Open the file for writing
  fp = fopen("gensub.txt", "w");
  if (fp == NULL) {
    printf("Error opening file.\n");}
  // Generate a random number
  srand(time(NULL));

   int code = rand() % 1000000;
      
    printf("Your subscription code is: %d\n", code);
 
    fprintf(fp, "\n%d\n", code);    fclose(fp);
     
     
    
    system("pause");
    system("cls");
      int match;
      printf("Enter your Code:");
      scanf("%d",&match);
      
      while (code==match)
      { system("pause");
        printf("Code valid\nApplying on your profile\nUpdate sucessfully");
        applying();
        break;
      }
      while (code!=match){
        for(int i=1;i<=2;i++){
            printf("Not valid \n Retry again\n");
            scanf("%d",&match); 
        
            if(code==match){ 
              printf("Code valid\n\nApplying on your profile\n");
              system("pause");
              applying();
              printf("\nUpdate sucessfully\n");
            }
            }
           break; 
            
        }
}
 

void buysub(){
    
    int price,mont;
    printf("\nEnter your Amount:\t");
    scanf("%d",&price);
    if (price>=500&&price<=700)
    {
      printf("This code valid for one month\n ");
      subgena();
    }
    else if(price>=700&&price<=1000){
      printf("This code valid for 3 month");
      subgena();
      
      }
      else if(price>=1000&&price<=1500){
        printf("This code Valid for 1 Year");
        subgena();
      }
      else{ 
        printf("Eror!\nRetruning back phase:");
        waitingscrn(); 
        return buysub();
      }




}



     
      
void subareae(){
  system("cls");
  waitingscrn();
     
        printf( "\t-------------------------------------------------------------\n");
        printf("\t||------------------Subcription buying area--------------------||\n");
        printf( "\t||-------------------------------------------------------------||\n");
  printf("chose your Subcriptions: \n1)1 month subcription price is 500-700 \n2)3month subcription price is 700-1000 \n3)1 Year subcription price1000-1500");
  buysub();
  system("cls");
}
  
      


