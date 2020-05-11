#include<iostream>
using namespace std;

main()
{
int x, y, matriks1[100][100], matriks2[100][100], hasil[100][100];

cout << "Nama : I Gede Tubagus Wiranata" << endl;
cout << "NIM : F1B019065" << endl;
cout << "Kelompok : 14" << endl;

cout << "\nMatriks 1 : " << endl;
for(x = 0; x < 2; x++)
{for(y = 0; y < 2; y++)
{cout << "[" << x << "][" << y << "] : ";
	cin >> matriks1[x][y];}}
	
printf("\nMatriks 2 : \n");
for(x = 0; x < 2; x++)
{for(y = 0; y < 2; y++)
{cout << "[" << x << "][" << y << "] : ";
	cin >> matriks2[x][y];}}

cout << endl;

for(x = 0; x < 2; x++)
{for(y = 0; y < 2; y++)
{hasil[0][0] = (matriks1[0][0] * matriks2[0][0]) + (matriks1[0][1] * matriks2[1][0]);
hasil[0][1] = (matriks1[0][0] * matriks2[0][1]) + (matriks1[0][1] * matriks2[1][1]);
hasil[1][0] = (matriks1[1][0] * matriks2[0][0]) + (matriks1[1][1] * matriks2[1][0]);
hasil[1][1] = (matriks1[1][0] * matriks2[0][1]) + (matriks1[1][1] * matriks2[1][1]);}
}

cout << "\nMatriks 1 * Matriks 2 : " << endl;
for(x = 0; x < 1; x++)
{ for(y = 0; y < 1; y++)
{cout << matriks1[0][0] << " " << matriks1[0][1] << "\t" << matriks2[0][0] << " " << matriks2[0][1] << "\t" << hasil[0][0] << " " << hasil[0][1] << endl;
 cout << matriks1[1][0] << " " << matriks1[1][1] << "\t" << matriks2[1][0] << " " << matriks2[1][1] << "\t" << hasil[1][0] << " " << hasil[1][1];}
}
cout << endl;
}
