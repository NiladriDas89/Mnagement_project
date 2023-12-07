// C program to create loading bar 
#include <stdio.h> 
#include <windows.h>
void applying();

/*============================================================================================================================================*/




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
/*============================================================================================================================================*/


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
/*============================================================================================================================================*/
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


/*============================================================================================================================================*/

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

/*============================================================================================================================================*/
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









