#include<stdio.h>
main()
{int x, y, matriks1[100][100], matriks2[100][100], hasil[100][100];

printf("Nama : I Gede Tubagus Wiranata\n");
printf("NIM : F1B019065\n");
printf("Kelompok : 14\n");

printf("\nMatriks 1 : \n");
for(x = 0; x < 2; x++){
for(y = 0; y < 2; y++){
printf("[%d] [%d] : ", x, y);
scanf("%d", &matriks1[x][y]);
}
}
printf("\nMatriks 2 : \n");
for(x = 0; x < 2; x++)
{for(y = 0; y < 2; y++)
{printf("[%d] [%d] : ", x, y);
scanf("%d", &matriks2[x][y]);}}

printf("\n");

for(x = 0; x < 2; x++)
{for(y = 0; y < 2; y++)
{hasil[0][0] = (matriks1[0][0] * matriks2[0][0]) + (matriks1[0][1] * matriks2[1][0]);
hasil[0][1] = (matriks1[0][0] * matriks2[0][1]) + (matriks1[0][1] * matriks2[1][1]);
hasil[1][0] = (matriks1[1][0] * matriks2[0][0]) + (matriks1[1][1] * matriks2[1][0]);
hasil[1][1] = (matriks1[1][0] * matriks2[0][1]) + (matriks1[1][1] * matriks2[1][1]);}
}
printf("\nMatriks 1 * Matriks 2 : \n");
for(x = 0; x < 1; x++)
{ for(y = 0; y < 1; y++)
{printf("\n%d %d  %d %d  %d %d\n", matriks1[0][0], matriks1[0][1], matriks2[0][0], matriks2[0][1], hasil[0][0], hasil[0][1]);
printf("%d %d  %d %d  %d %d", matriks1[1][0], matriks1[1][1], matriks2[1][0], matriks2[1][1], hasil[1][0], hasil[1][1]);}
}
printf("\n");
}
