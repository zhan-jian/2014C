#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mcount 3

int main()
{
 int n;

 srand(time(0));
 n=1+rand()%mcount;

 printf(" ¹§Ï²µÚ :%d ×é\n",n); 

 system("pause");
 return 0;
}