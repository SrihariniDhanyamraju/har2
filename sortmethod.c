#include <stdio.h>
int sort(int ar[],int y)
{
  int i,j,temp=0;
  for(i=0;i<=y;i++)
   {
    for(j=0;j<=(y-i-1);j++)
     {
     if(ar[j]>ar[j+1])
 	{      
   	temp=ar[j];
        ar[j]=ar[j+1];
        ar[j+1]=temp;
	}
	}
	}

   for(i=0;i<=y;i++)
    printf("%5d",ar[i]);
  	return 0;
}

