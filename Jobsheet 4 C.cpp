#include<stdio.h>

int main(){
int i, x, matriks1[100][100], matriks2[100][100], hasil[100][100];

printf("Nama : I Gede Tubagus Wiranata\n");
printf("NIM : F1B019065\n");
printf("Kelompok : 14\n");

printf("\nMatriks 1 : \n");
for(i = 0; i <= 1; i++){
for(x = 0; x <= 1; x++){
printf("[%i] [%x] : ", i, x);
	scanf("%d", &matriks1[i][x]);}}

printf("\nMatriks 2 : \n");
for(i = 0; i <= 1; i++)
{for(x = 0; x <= 1; x++){
printf("[%i] [%x] : ", i, x);
	scanf("%d", &matriks2[i][x]);}}

printf("\nHasilnya : \n");
for(i = 0; i <= 1; i++){
for(x = 0; x <= 1; x++){
hasil[i][x] = matriks1[i][x] - matriks2[i][x];
printf("%d \t", hasil[i][x]);}
printf("\n");}
}
