#include <iostream>
using namespace std;

int main() {
int i, j, matriks1[100][100], matriks2[100][100], hasil[100][100];

cout << "Nama : I Gede Tubagus Wiranata" << endl;
cout << "NIM : F1B019065" << endl;
cout << "Kelompok : 14" << endl;

cout << "\nMatriks 1 : \n";
for(i = 0; i <= 1; i++){
for(j = 0; j <= 1; j++){
cout<< "[" << i << "] [" << j << "] : ";
	cin >> matriks1[i][j];}}

cout << "\nMatriks 2 : \n";
for(i = 0; i <= 1; i++)
{for(j = 0; j <= 1; j++){
cout<< "[" << i << "] [" << j << "] : ";
	cin >> matriks2[i][j];}}

cout << "\nHasilnya : \n";
for(i = 0; i <= 1; i++){
for(j = 0; j <= 1; j++){
hasil[i][j] = matriks1[i][j] - matriks2[i][j];
cout << hasil[i][j] << "\t";}
cout << endl;}

}
