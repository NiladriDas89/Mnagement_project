#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>
//#include"load.c"


void subgena();
void buysub();
void subareat();


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
      hid:
      printf("Enter your Code:");
      scanf("%d",&match);
      
      while (code==match)
      { system("pause");
        printf("Code valid\nApplying on your profile\nUpdate sucessfully");
        //applying();
        break;
      }
      while (code!=match){
          printf("Not valid \n Retry again\n");
          goto hid; 
               break; 
            
        }
}
 

void buysub(){
    
      
    int price,mont;
    ui:
    printf("\nEnter your Amount:\t");
    scanf("%d",&price);
    if (price==700)
    {
      printf("This code wiil give you 10 percent discount\n ");
      subgena();
    }
    else if(price==1000){
      printf("This code wiil give you 25 percent discount\n");
      subgena();
      
      }
      else if(price==1500){
        printf("This code will give you 50 percent discount \n");
        subgena();
      }
      else{ 
        printf("Eror!\nRetruning back phase:");
       // waitingscrn(); 
        goto ui;

      }




}



     
      
void subareat(){

  system("cls");
 // waitingscrn();
    
        printf( "\t-------------------------------------------------------------\n");
        printf("\t||------------------Subcription buying area--------------------||\n");
        printf( "\t||-------------------------------------------------------------||\n");
    printf("chose your Subcriptions: \n Subcription price is 1)700 \n 2) 1000 \n3) 1500\nEnter your Options:\t");
    buysub();
    system("cls");

}




