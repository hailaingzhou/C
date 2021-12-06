#include "stdio.h"
#include "stdlib.h"
#include "math.h"
int main()
{
   int flag=1,counter=0;
   double pi=0.0,term,n=1.0,i;
   do
   {
	   term=1.0/n;
	   n=n+2;
	   pi=pi+flag*term;
	   flag=-flag;
	   counter++;
   }
   while(counter<=10000000);
   pi=pi*4;
   printf("%lf",pi);
	system("pause");
	return 0;
}