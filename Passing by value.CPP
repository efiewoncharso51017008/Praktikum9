#include <iostream.h>
#include <conio.h>
#include <math.h>

int hitung(int x, int y) // x dan y = parameter input
{
int ls;
ls = x * y;
return(ls);
}

void main ()
{
int pilih ;
int panjang, lebar, alas, tinggi, sisi;
float luas;
do
{
clrscr();
cout<<"Pilihlah ---------> "<<endl;
cout<<"1.Luas persegi panjang \n";
cout<<"2.luas segitiga\n";
cout<<"3.Luas bujur sangkar\n";
cout<<"4.SELESAI\n";
cout<<"Masukan Pilihan Anda : ";
cin>>pilih;

switch(pilih)
{
case 1 : cout<<"Masukan nilai panjang: ";
         cin>>panjang;
         cout<<"Masukan Nilai lebar: ";
         cin>>lebar;
         luas=hitung(panjang,lebar);
         break;
case 2 : cout<<"Masukan nilai Alas: \n";
         cin>>alas;
         break;
         cout<<"Masukan Nilai tinggi: ";
         cin>>tinggi;
         luas=hitung(alas, tinggi)*0.5;
         break;
case 3 : cout<<"Masukan nilai sisi: ";
         cin>>sisi;
         luas=hitung(sisi,sisi);
         break;
case 4 : cout<<"Terima Kasih....";
}
if (pilih!=4)
cout<<"luasnya adalah: "<<luas;
getch();
} while (pilih !=4);
}

