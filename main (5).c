/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int ch;
    printf(".....list of food items....");
    printf("\n1:pizza \n2:burger \n3:pasta \n4:french fries \n5:sandwhich \n6:exit");
    printf("input your choice(1----6)");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("pizza \n rs:239");
               break;
        case 2:printf("burger \n rs:129");
                break;
        case 3:printf("pasta \n rs:179");
                break;
        case 4:printf("french fries \n rs:99");
                break;
        case 5:printf("sandwhich \n rs:149");
                break;
        case 6:exit(0);
        deafult :printf("\n wrong choice");
    }
}
        
        
        
        
        
        
        
        
        
    
