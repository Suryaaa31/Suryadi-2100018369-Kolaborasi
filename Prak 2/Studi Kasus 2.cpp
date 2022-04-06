//Suryadi (2100018369)
//M Naufal Labib Ramadhan (2100018378)
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	char pembelian;
	int kode, porsi, jumlah, banyak;
	long int total,diskon,akhir, bayar, harga,duit,kembalian, jarak,ongkir,diskon2;
	atas:
	
	cout<<" ======================MENU MAKANAN======================="<<endl;
	cout<<" 1. Ayam Geprek"<<endl;
	cout<<" 2. Ayam Goreng"<<endl;
	cout<<" 3. Udang Goreng"<<endl;
	cout<<" 4. Cumi Goreng"<<endl;
	cout<<" 5. Ayam bakar"<<endl;
	cout<<"Masukkan jarak tempuh = ";
	cin>>jarak;
	cout<<"Jumlah Menu Yang Dipesan = ";
	cin>>banyak;
	jumlah=1;
	bayar=0;
	for(jumlah=1;jumlah<=banyak;jumlah++){
	ulang:cout<<" Masukan Kode Menu = ";
	cin>>kode;
	if (kode==1)
	{
		cout<<" Nama Makanan = Ayam Geprek"<<endl;
		cout<<" Harga        = Rp. 21.000,-"<<endl;
		cout<<" Jumlah Porsi = ";cin>>porsi;
		harga=21000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
	else if (kode==2)
	{
		cout<<" Nama Makanan = Ayam Goreng"<<endl;
		cout<<" Harga        = Rp. 17.000,-"<<endl;
		cout<<" Jumlah Porsi = "; cin>>porsi;
		harga=17000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
		else if (kode==3)
	{
		cout<<" Nama Makanan = Udang Goreng"<<endl;
		cout<<" Harga        = Rp. 19.000,-"<<endl;
		cout<<" Jumlah Porsi = "; cin>>porsi;
		harga=19000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
		else if (kode==4)
	{
		cout<<" Nama Makanan = Cumi Goreng"<<endl;
		cout<<" Harga        = Rp. 20.000,-"<<endl;
		cout<<" Jumlah Porsi = "; cin>>porsi;
		harga=20000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
		else if (kode==5)
	{
		cout<<" Nama Makanan = Ayam Bakar"<<endl;
		cout<<" Harga        = Rp. 25.000,-"<<endl;
		cout<<" Jumlah Porsi = "; cin>>porsi;
		harga=25000;
		total=harga*porsi;
		cout<<" Total Harga  = Rp"<<total;
		cout<<endl;
	}
	else
	{
		cout<<"-Invalid Number-a";
		goto ulang;
	}
	}
	if(jarak<3){
		ongkir = 15000;
	}
		else if (jarak>=3) {
		ongkir= 25000;
	}
		else {
		cout<<" ";
	}
		if(25000<=total<=50000){
		diskon=ongkir-3000;
	}
		if(50000<=total<=150000){
		diskon=ongkir-5000;
		diskon2=total*0.15; 
	}
		if(total>=150000){
		diskon=ongkir-8000;
		diskon2=total*0.35;
	}
		else {
		cout<<" ";
	}
		bayar=total;
		cout<<"Total Bayar          = Rp"<<(bayar+diskon)-diskon2<<",-"<<endl;
		cout<<"Masukan Pembayaran   = Rp";cin>>duit;

	akhir=duit-((bayar+diskon)-diskon2);
	kembalian=akhir;
	cout<<"Kamu Dapat Ongkir     = Rp"<<diskon<<",-"<<endl;
	cout<<"Cash Back             = Rp"<<kembalian<<",-"<<endl;
	cout<<"=========TERIMAKASIH=========="<<endl;
	cout<<"Pembelian Baru [y/t] ";cin>>pembelian;
	if (pembelian=='y'||pembelian=='Y')
	goto atas;
	else
	
	return 0;
}
