#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define mcount 3

int main()
{
 int n;

 srand(time(0));
 n=1+rand()%mcount;

 printf(" ��ϲ�� :%d ��\n",n); 

 system("pause");
 return 0;
}