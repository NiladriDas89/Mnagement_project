#include"stdio.h"
#include<windows.h>
#include "LoginLogout.c"
#include"subpage.c"
#include"load.c"
#include"wellcome.c"


int main(){
      
      well();
      head:
       printf("Pressthe the numberto continue the process\nLogin your account(1)\nCreate your account(2),\nDelete your account(3)") ;
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
      
      default:
         goto head;
      break;
      
       }
      
      
         
         
return 0;


}
