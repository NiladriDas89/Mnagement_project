#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <time.h>
#include <windows.h>





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





























//    ===================This code is loading screen==================== */

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

// =============================This area for Product code================= */
// ====================This area for system loading screen ===============*/
void well(){
       
        waitingscrn();

        
        system("cls");
        printf("\n\t\t\t\t--------------------------------------------------------------");
        printf("\n\t\t\t\t|===============Wellcome to our C_COFFE SHOP================|\n" );
        printf( "\t\t\t\t-------------------------------------------------------------\n");
        system("pause");
        
        }
// ==================== Subpage code ===================== */

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
        applying();
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
       waitingscrn(); 
        goto ui;

      }




}



     
      
void subareat(){
    
  system("cls");
  waitingscrn();
    
        printf( "\t-------------------------------------------------------------\n");
        printf("\t||------------------Subcription buying area--------------------||\n");
        printf( "\t||-------------------------------------------------------------||\n");
    printf("chose your Subcriptions: \n Subcription price is 1)700 \n 2) 1000 \n3) 1500\nEnter your Options:\t");
    buysub();
    system("cls");

}







// =-----------------========================login screen code =====================---------= */
struct account{
    char username[30];
    char pass1[20];
};

void divider()
{
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
}

void takepassword(char pass[20])
{
    int i = 0;
    char ch;
    while (1)
    {
        ch = getch();
        if (ch == 13)
        {
            pass[i] = '\0';
            break;
        }
        else if (ch == 8)
        {
            if (i > 0)
            {
                i--;
                printf("\b \b");
            }
        }
        else if (ch == 9 || ch == 32)
        {
            continue;
        }
        else
        {
            pass[i++] = ch;
            printf("*");
        }
    }
}



void signup()
{
    struct account u;
    system("cls");
    char pass2[20];
    printf("CREATING NEW ACCOUNT \n");
    divider();
    printf("Enter your username : ");
    scanf("%s", u.username);
    fflush(stdin);
    printf("Enter password : ");
    takepassword(u.pass1);

conf_pass:
    printf("\nConfirm password : ");
    scanf("%s", pass2);

    if (strcmp(u.pass1, pass2))
    {
        printf("INCORRECT PASSWORD \n\n");
        goto conf_pass;
    }
    else
    {
        printf("ACCOUNT CREATED SUCCESSFULLY\n\n");
        getch();

        FILE *fp = fopen("coffeaccnt.txt", "w");
        fwrite(&u, sizeof(struct account), 1, fp);
        fclose(fp);
    }
}



void login()
{
    system("cls");
    char user[30], log_pass[20];

    struct account u;
    FILE *fp = fopen("coffeaccnt.txt", "r");
    fread(&u, sizeof(struct account), 1, fp);

name:
    printf("enter Username : ");
    scanf("%s", user);
    if (strcmp(u.username, user))
    {
        printf("\nPLEASE ENTER CORRECT USERNAME\n ");
        goto name;
    }

    else
    {
    logpass:
        printf("Enter password : ");
        takepassword(log_pass);
        if (strcmp(u.pass1, log_pass))
        {
            printf("\nINCORRET PASSWORD \n");
            goto logpass;
        }
        else
        {
            system("cls");
          // printf("\nWELCOME %s\n", u.first_name);
            divider();

            printf("\nYour Details \n");
            divider();
            printf("\nUsername     : %s\n", u.username);
            printf("Password     : %s\n", u.pass1);
        }
        getch();
    }
    fclose(fp);
}




void delete_account()
{

    FILE *fp = fopen("coffeaccnt.txt", "r");

    printf("ARE YOU SURE[Y/N] : ");
    char ch = getche();
    if (ch == 'Y' || ch == 'y')
    {
        fp = fopen("coffeaccnt.txt", "w");
        fprintf(fp, " ");
        printf("\nACCOUNT DELETED SUCCESSFULLY\n");
        getch();
    }

    else if (ch == 'N' || ch == 'n')
    {
        printf("\nACCOUNT DELETION STOPPED\n");
        getch();
    }
}
// =================        ===================*/