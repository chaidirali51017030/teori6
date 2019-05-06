#include <iostream.h>
#include <conio.h>

int main ()
{
char nama [20], kode;
int pil,jumbelanja,tbelanja,tbayar,kembalian,harga,diskon,bayar;
	cout<<"Nama : ";
   cin>>nama;
   cout<<endl;
   cout<<"A. Kursi Rp.1.000.000\n";
   cout<<"B. Meja  Rp.2.000.000\n";
   cout<<"C. Lemari Rp.2.500.000\n";
   cout<<"D..KELUAR\n" ;
   cout<<*Pilihan yang akan di beli (A-D)
cout<<"Masukkan jumlah barang yang diinginkan : "; cin>> Jumlahbelanja;
switch (kode)

case 'A' ;
harga=1000000;
cout<<"Barang yang di beli : Kursi\n";
cout<<"Harga satuan : Rp "<<harga<<endl;
break;

case 'B' ;
harga=2000000;
cout<<"Barang yang di beli : Meja\n";
cout<<"Harga satuan : Rp "<<harga<<endl;
break;

case 'C' ;
harga=2500000;
cout<<"Barang yang di beli : Lemari\n";
cout<<"Harga satuan : Rp "<<harga<<endl;
break;

}
Tbelanja = jumbelanja * harga;
cout<<"Masukkan kode barang 		: "Kode<<endl;
cout<<"Total yang harus di bayar : Rp. " <tbelanja<<endl;
if (tbelanja >= 1000000)
{diskon = total belanja * 20/100;}
else
{diskon = 0 ;}
cout<<"Diskon                    : Rp. "<<diskon<<endl;
tbayar = tbelanja - diskon;
cout<<"Total yang harus dibayar 	: Rp. "<<tbayar<<endl;
cout<<"Masukkan uang pembayaran	: Rp. "<< cin>>bayar;
kembalian = bayar - tbayar;
cout<<"kembalian						: Rp. "<<kembalian<<endl;
cout<<"--------------------------------------------------"<<endl;
cout<<" 		Terima Kasih		"<<endl;
getch ();
}