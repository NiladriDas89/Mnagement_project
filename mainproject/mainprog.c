#include"stdio.h"
#include<windows.h>
#include "LoginLogout.c"
#include"subpage.c"
#include"wellcome.c"


int main(){
      system("cls");
      waitingscrn();
      system("cls");
      well();
      head:
       printf("Press the the number to continue the process\n\t\t(1)Login your account\n\t\t(2)Create your account\n\t\t(3)Delete your account\n\t\t(4)Exit\n\t\t");

       int inp;
         scanf("%d",&inp);
       switch (inp)
       {
      case 1:
         login();
      break;
      
      case 2:
            signup();
      break;
      
      case 3:
         delete_account();
      break;
      case 4:
         exit(4);
      break;
      default:
         goto head;
      break;
      
       }
      
      
         
         
return 0;


}





























//this code is loading screen

void applying()
{ 
	// 0 - black background, 
	// A - red Foreground 
	system("color 0C"); 

	// Initialize char for printing 
	// loading bar 
	char a = 177, b = 219; 

	printf("\n\n\n\n"); 
	printf("\n\n\n\n\t\t\t\t\t""Applying...\n\n"); 
	printf("\t\t\t\t\t"); 

	// Print initial loading bar 
	for (int i = 0; i < 26; i++) 
		printf("%c", a); 

	// Set the cursor again starting 
	// point of loading bar 
	printf("\r"); 
	printf("\t\t\t\t\t"); 

	// Print loading bar progress 
	for (int i = 0; i < 26; i++) { 
		printf("%c", b); 

		// Sleep for 1 second 
		Sleep(200); 
	} 
	system("cls");
}



void deltscr()
{ 
	// 0 - black background, 
	// A - red Foreground 
	system("color 0C"); 

	// Initialize char for printing 
	// loading bar 
	char a = 177, b = 219; 

	printf("\n\n\n\n"); 
	printf("\n\n\n\n\t\t\t\t\t""Deleting...\n\n"); 
	printf("\t\t\t\t\t"); 

	// Print initial loading bar 
	for (int i = 0; i < 26; i++) 
		printf("%c", a); 

	// Set the cursor again starting 
	// point of loading bar 
	printf("\r"); 
	printf("\t\t\t\t\t"); 

	// Print loading bar progress 
	for (int i = 0; i < 26; i++) { 
		printf("%c", b); 

		// Sleep for 1 second 
		Sleep(200); 
	} 
	system("cls");
}

void logscr()
{ 
	// 0 - black background, 
	// A - red Foreground 
	system("color 0C"); 

	// Initialize char for printing 
	// loading bar 
	char a = 177, b = 219; 

	printf("\n\n\n\n"); 
	printf("\n\n\n\n\t\t\t\t\t""Login...\n\n"); 
	printf("\t\t\t\t\t"); 

	// Print initial loading bar 
	for (int i = 0; i < 26; i++) 
		printf("%c", a); 

	// Set the cursor again starting 
	// point of loading bar 
	printf("\r"); 
	printf("\t\t\t\t\t"); 

	// Print loading bar progress 
	for (int i = 0; i < 26; i++) { 
		printf("%c", b); 

		// Sleep for 1 second 
		Sleep(200); 
	} 
	system("cls");
}




void waitingscrn() 
{ 
	// 0 - black background, 
	// A - blue Foreground 
	system("color 09"); 

	// Initialize char for printing 
	// loading bar 
	char a = 177, b = 219; 

	printf("\n\n\n\n"); 
	printf("\n\n\n\n\t\t\t\t\t""Wait for a Sceond...\n\n"); 
	printf("\t\t\t\t\t"); 

	// Print initial loading bar 
	for (int i = 0; i < 26; i++) 
		printf("%c", a); 

	// Set the cursor again starting 
	// point of loading bar 
	printf("\r"); 
	printf("\t\t\t\t\t"); 

	// Print loading bar progress 
	for (int i = 0; i < 26; i++) { 
		printf("%c", b); 

		// Sleep for 1 second 
		Sleep(200); 
	} 
	system("cls");
}


void acount() 
{ 
	// 0 - black background, 
	// A - white Foreground 
	system("color 0F"); 

	// Initialize char for printing 
	// loading bar 
	char a = 177, b = 219; 

	printf("\n\n\n\n"); 
	printf("\n\n\n\n\t\t\t\t\t""Account Checking...\n\n"); 
	printf("\t\t\t\t\t"); 

	// Print initial loading bar 
	for (int i = 0; i < 26; i++) 
		printf("%c", a); 

	// Set the cursor again starting 
	// point of loading bar 
	printf("\r"); 
	printf("\t\t\t\t\t"); 

	// Print loading bar progress 
	for (int i = 0; i < 26; i++) { 
		printf("%c", b); 

		// Sleep for 1 second 
		Sleep(200); 
	} 
	system("cls");
}
