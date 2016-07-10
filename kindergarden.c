#include <stdio.h>
#include <conio.h>
int main()
{

	int i,j,n,x,y,accent=97,days;
		char name[100],temp;
		clrscr();
	 printf("Enter the value n ");
scanf("%d",&n);        
x=2*n;
y=x-1;
		     
		    for(i=0;i<x;i++)
		       	{
				name[i]=accent;
				accent++;
			}						  
			 days=y;
			 j=2*n-1;
			
			 while(days!=0)
			 {
				printf("\n The children pairs for day %d",days);
				
				for(i=0;i<2*n;i++)
				{
					printf("\n %c %c",name[i],name[j]);
					j--;
				}
				for(i=0;i<2*n;i++)
					{ 

						if(i==0)
						{
							temp=name[i];
						}
					name[i]=name[i+1];
					if(i==(2*n)-1)
						{
						name[i]=temp;
						}
					}
					days--;
			 }
		return 0;
	}


