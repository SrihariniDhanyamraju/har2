#include<stdio.h>
extern int sort( );
int main()
{
  int a[]={20,5,10,3,8,17};
  int n=5;
   printf("sorted array is:");
   sort(a,n);
	return 0;
}
