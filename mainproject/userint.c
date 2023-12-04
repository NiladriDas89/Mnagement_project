#include<stdio.h>
#include"loag.c"
#include"subpage.c"
void usrer(){
    char usrtyp;
    printf("Select your Account type:\n 1)Normal user(R) 2)Subcription usr(S) 3)Admin(A) 4)New Account(N): ? \n");
    
    usrtyp=getchar();
    //do
    //{
        if (usrtyp='R')
        {
            printf("You need Subcription ?(y/n)");
            char yn=getchar();
            if (yn='n'){
                printf("Continue without Subcription on this account\n");
                loadingBar();
                system("clear")   ;

                }
                else if (yn='y')
                {  
                    loadingBar();
                        buysub();
                        system("pause");
                        system("clear");
                }
                else {
                    printf("404 Not found");
                    // return getchar();                   
                }
                
                
                

            }
            else if(usrtyp='A'){

            }
            
      //  }while (usrtyp<='S');

            } 
    
    
    
void main(){
    usrer();
}