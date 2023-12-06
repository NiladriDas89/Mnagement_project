#include <stdio.h>
#include <stdlib.h>
char username[100];char filename[100];
void filecreate() {
  // Declare a FILE type pointer variable to store reference of file, say FILE * fPtr = NULL;
  FILE * fPtr = NULL;


  // Create the file with the username as the filename
  
  sprintf(filename, "%s.txt", username);
  fPtr = fopen(filename, "w");

  // Check if the file was created successfully
  if (fPtr == NULL) {
    printf("Error creating file.\n");
    exit(1);
  }

  // Write some data to the file
  fprintf(fPtr, "Hello, %s!\n", username);

  // Close the file
  fclose(fPtr);

  printf("File created successfully.\n");

  return 0;
}
void main(){
  filecreate();
}

void unfilewrite(char username[100],int wrt[200]) {
  // Declare a FILE type pointer variable to store reference of file, say FILE * fPtr = NULL;
  char filename[100];
  FILE * fPtr = NULL;


  // Create the file with the username as the filename
  
  sprintf(filename, "%s.txt", username);
  fPtr = fopen(filename, "w");

  // Check if the file was created successfully
  if (fPtr == NULL) {
    printf("Error creating file.\n");
    exit(1);
  }

  // Write some data to the file
  fprintf(fPtr, "Hello, %s!\n", username);

  // Close the file
  fclose(fPtr);

  printf("File created successfully.\n");

  return 0;
}

