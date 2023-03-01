#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int j,i,k,l,h,g,f,d;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		
		for(k=4;k>=i;k--)
		{
			printf("  ");
		}
		
		for(l=1;l<=i;l++)
		{
			printf("*");
		}
			  
		printf("\n");	
	}	
	
	
	for(h=1;h<=5;h++)
	{
		for(g=5;g>=h;g--)
		{
			printf("*");	
		}
		
		for(f=2;f<=h;f++)
		{
			printf("  ");
		}
		
		for(d=5;d>=h;d--)
		{
			printf("*");
		}
		
		printf("\n");
		
	}
	return 0;
}
