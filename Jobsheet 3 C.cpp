#include <stdio.h>
#include <conio.h>

main (){
	int nim1 [2][2]; 
	int nim2 [2][2]; 
	int hasil [2][2];
	int i, j;
	printf("Nama=I Gede Tubagus Wiranata\nNIM=65\nKelompok=14");
   	printf("\nNama=I Nyoman Dimas Bayu Semara Putra\nNIM=68\nKelompok=14");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
			printf ("Masukkan nilai index %d, %d = ", i, j);
			scanf ("%d", &nim1[i][j]);
		}
	}
	printf ("\n");
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2; j++){
	printf ("Masukkan nilai index %d, %d = ", i, j);
	scanf ("%d", &nim2[i][j]);
		}
	}
	for (i = 0; i < 2; i++){
		for (j = 0; j < 2;j++){
			hasil [i][j]=nim1[i][j]+nim2[i][j];
			printf ("%d ", hasil[i][j]);
		}
		printf ("\n");
	}
	getch();
}
