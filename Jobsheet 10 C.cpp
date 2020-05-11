#include<stdio.h>

int main(){ 
int i, j, matriks[100][100], transpose[100][100]; 

printf("Nama : I Gede Tubagus Wiranata");
printf("\nNIM : F1B019065");
printf("\nKelompok : 14\n\n");

for(i = 0; i< 3; i++)
{for(j = 0; j < 3; j++)
{printf("MasukanNilaiMatriks [%d][%d] : ", i+1, j+1);
scanf("%d", &matriks[i][j]);}}

printf("\nMatriks\n"); 
for (i = 0; i< 3; i++)
{for(j = 0; j < 3; j++)
{printf("%5d", matriks[i][j]);} 
printf("\n");} 

}

