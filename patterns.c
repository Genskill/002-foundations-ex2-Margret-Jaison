#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int choice=get_int("Enter type of pattern (1 or2)");
    int n=get_int("Number of rows");
    int c=n;	
    
    switch(choice)
     {
       case 1:for(int i=1;i<=n;i++)
              {
                for(int j=n;j>=i;j--)
                   {
                   printf("#");
                 
                   }
                printf("\n");
              }
             break;
 
       case 2: for(int i=1;i<=n;i++)
               {
                 
                 for(int k=i;k<=n;k++)
                   {
                   printf(" "); 
                  
                   }
                 for(int j=1;j<=i;j++)
                   {
                    printf("#");
                   }
                   printf("\n");
               }
       
              break;
     default:break;  
     }
 
 }
		
