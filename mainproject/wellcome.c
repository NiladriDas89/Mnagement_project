#include<stdio.h>
#include"loag.c"
void well(){
        loadingBar();
        waitingscrn();

        
        
        printf("\n\t\t\t\t--------------------------------------------------------------");
        printf("\n\t\t\t\t|===============Wellcome to our C_COFFE SHOP================|\n" );
        printf( "\t\t\t\t-------------------------------------------------------------\n");
        system("pause");
        system("cls");
        }


void account(){
        int type;
        printf("1)Create Account\t\t2)Login account\n3)Buy A Subcription");
        scanf("%d",type);
        switch (type)
        {
        case 1:

                break;
        case 2:

                break;
        case 3:
                break;
        default:
                break;
        }
}   