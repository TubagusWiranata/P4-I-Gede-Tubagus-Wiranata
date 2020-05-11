#include <stdio.h>
int main()
{
int i;
char nama[10]={'B','A','G','U','S'};
char nama2[10]="BAGUS";
printf("Array per Karakter = ");
for(i=0;i<=4;i++)
{
printf("%c",nama[i]);
}
printf("\n"); printf("Array string = %s\n\n",nama2);
return 0;
}

