#include <stdio.h> 
#include <cs50.h>
int main() 
{
float max,m,n; 
	float a= get_float("side 1");  
	float b= get_float("side 2"); 
	float c= get_float("side 3"); 
	if(a>b&&a>c) 
	{max=a;
	m=b; 
	n=c;} 
	else if(b>c) 
	{max=b;
	m=a; 
	n=c;} 
	else  
	{max=c; 
	 m=a; 
	 n=b;}
if(max*max== m*m+n*n)
    printf("Yes"); 
else 
 printf("No"); 
	 	
}
