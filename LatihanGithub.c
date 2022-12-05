/* 
 Deskripsi : Program Menentukan Luas Persegi Panjang.
 I.S. : diketahui nilai panjang dan lebar sebuah persegi panjang dari pembaca program kemudian tentukan nilai luas persegi panjang.
 F.S. : nilai luas persegi panjang telah ditemukan.
 Nama/Author : Arnanda Prasatya
 Tgl/Versi : 2 November 2022/ 01
 */
 
 //Bhisma
//test branch kedua

#include<stdio.h>
// deklarasi modul
float hitungLuasPersegiPanjang(float p, float l);

int main(){
	// Deklarasi main
	float Panjang, Lebar, Luas;
	// algoritma
	scanf("%f %f", &Panjang, &Lebar);
	Luas = hitungLuasPersegiPanjang(Panjang, Lebar);
	printf("Luas Persegi Panjang adalah %f", Luas);
	return 0;
}

float hitungLuasPersegiPanjang(float p, float l){
	// deklarasi fungsi
	float L;
	// algoritma
	L = p*l;
	return L;
}
