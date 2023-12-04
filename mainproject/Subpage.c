#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void subgen() {

  FILE *fp;

  // Open the file for writing
  fp = fopen("gensub.txt", "w");
  if (fp == NULL) {
    printf("Error opening file.\n");}
  // Generate a random number
  srand(time(NULL));

   int code = rand() % 1000000;
      
    printf("Your subscription code is: %d\n", code);
 
    fprintf(fp, "%d\n", code);
    fclose(fp);
  submatch(code);

      

}
void submatch(int code){
      int match;
      printf("Enter your Code:");
      scanf("%d",&match);
      match==code?printf("Code valid\nApplying on your profile\nUpdate sucessfully"):printf("Not valid \n Retry again");
      

    };
