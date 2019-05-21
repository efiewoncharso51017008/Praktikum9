#include <iostream.h>
#include <conio.h>
#include <math.h>

int panjang, lebar; //deklarasi fariabel global

void input (); //deklarasi prototipe fungsi

void luas()
{
int ls; //deklarasi variabel lokal
ls = panjang * lebar;
cout<<"Luasnya adalah : "<<ls;
}

void keliling ()
{
int kl; //deklarasi variabel lokal
kl = (2*panjang) + (2*lebar);
cout<<"kelilingnya adalah : \n"<<kl;
}

void diagonal ()
{
float dg; //deklarasi variabel lokal
dg = sqrt((panjang*panjang)+(lebar*lebar));
cout<<"diagonalnya adalah : \n"<<dg;
}

void main ()
{
int pilih ;
do
{
clrscr();
cout<<"Pilihlah ---------> "<<endl;
cout<<"1.Luas persegi panjang \n";
cout<<"2.Keliling persegi panjang\n";
cout<<"3.Diagonal Persegi panjang\n";
cout<<"4.SELESAI\n";
cout<<"Masukan Pilihan Anda : ";
cin>>pilih;

if (pilih != 4 )
input();

switch (pilih)
{
case 1 : luas();
         break;
case 2 : keliling ();
         break;
case 3 : diagonal ();
         break;
case 4 : cout<<"Terima Kasih. .!";
}
getch ();
} while (pilih !=4);
}
void input ()
{
cout<<"Masukan Nilai Panjang : \n";
cin>>panjang;
cout<<"masukan nilai lebar: \n";
cin>>lebar;
return;
}


