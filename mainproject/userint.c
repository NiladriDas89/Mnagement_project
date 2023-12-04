#include<stdio.h>
#include"loag.c"
#include"subpage.c"
void usr(){
    char typeofusr[]={'N','S','A'},usrtyp;
    int size1=sizeof(typeofusr)/sizeof(typeofusr[0]);
    
        printf("Select your Account type:\n 1)Normal user(N) 2)Subcription usr(S) 3)Admin/other(A): ? ");
    
    usrtyp=getchar();
    do
    {
        if (usrtyp='N')
        {
            printf("You need Subcription ?(y/n)");
            char yn=getchar();
            if (yn='n'){
                printf("Continue without Subcription on this account\n");
                loadingBar();
                   
                }
                else if (yn='y')
                {  
                    loadingBar();
                        subgen();
                    
                }
                else {
                    printf("404 Not found");
                     return usrtyp;                   
                }
                
                
                

            }
            else if(usrtyp='A'){

            }
            
        }while (usrtyp!=NULL||usrtyp==NULL);
            } 
    
    
    
