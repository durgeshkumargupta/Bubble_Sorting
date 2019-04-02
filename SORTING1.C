/* find BUBBLE sorting */
#include<stdio.h>
#include<conio.h>
#define max 5
void main()
{
     int nm[max],i,j,temp;
     clrscr();
     for(i=0;i<max;i++)
     {
       printf("Enter data[%d]=",(i+1));
       scanf("%d",&nm[i]);
     }
     printf("After sorting data=");
     for(i=0;i<max;i++)
       printf("%3d",nm[i]);
     for(i=0;i<max;i++)
     {
       for(j=0;j<(max-1-i);j++)
       {
	 if(nm[j]>nm[j+1])
	 {
	   temp=nm[j];
	   nm[j]=nm[j+1];
	   nm[j+1]=temp;
	 }
       }
     }
printf("\nBefore sorting data=");
for(i=0;i<max;i++)
printf("%3d",nm[i]);
getch();
}

